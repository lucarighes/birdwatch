from __future__ import print_function
from flask import Flask, jsonify, json, send_from_directory
from flask_pymongo import PyMongo
from bson import json_util
import pymongo, sys, time
from script.TimeGraph import compute
from script.generateImages import generateImages
from os import path


app = Flask(__name__, static_folder="../build", static_url_path="/")
app.config["MONGO_URI"] = "mongodb://localhost:27017/birdwatch"
mongo = PyMongo(app)

@app.route("/")
def index():
    return app.send_static_file("index.html")

@app.route("/api/graphcount/<topic>")
def home_page(topic):
    myclient = pymongo.MongoClient("mongodb://localhost:27017/")
    mydb = myclient["birdwatchdb"]
    mycol = mydb["notes"]

    data = []
    for x in mycol.find({}, {'createdAtMillis':1}):
        data.append(x.get('createdAtMillis'))
    
    res = compute(data)
    return json.dumps(res) 


@app.route("/api/graphtopics/<topic>")
def graph_topics(topic):
    return home_page(topic)


@app.route("/api/notefacts/<notes>/<facts>")
def notefacts(notes, facts):
    myclient = pymongo.MongoClient("mongodb://localhost:27017/")
    mydb = myclient["birdwatchdb"]
    mycol = mydb["facts"]

    data = {}
    pipeline = [
        {
            "$lookup": {
                "from": "notes",
                "localField": "TweetID",
                "foreignField": "tweetId",
                "as": "match"
            }
        }
    ]

    for x in mycol.aggregate(pipeline):
        for elem in x.get("match"):
            res = [elem.get("tweetId"), x.get("Label"), elem.get("classification")];
            if (notes != "empty" and facts != "empty" and x.get("Label") == facts and elem.get("classification") == notes):
                data[elem.get("tweetId")] = res
            elif (notes == "empty" and facts != "empty" and x.get("Label") == facts):
                data[elem.get("tweetId")] = res
            elif (notes != "empty" and facts == "empty" and elem.get("classification") == notes):
                data[elem.get("tweetId")] = res
            else:
                if (notes == "empty" and facts == "empty"):
                    data[elem.get("tweetId")] = res
    
    return json.loads(json_util.dumps(data))



@app.route("/api/notefactstat")
def notefactstat():
    myclient = pymongo.MongoClient("mongodb://localhost:27017/")
    mydb = myclient["birdwatchdb"]
    mycol = mydb["facts"]

    data1 = {}
    data1["NOT_MISLEADING"] = {"credible":0, "not_credible":0, "verifiable":0, "not_verifiable":0, "uncertain":0}
    data1["MISINFORMED_OR_POTENTIALLY_MISLEADING"] = {"credible":0, "not_credible":0, "verifiable":0, "not_verifiable":0, "uncertain": 0}

    pipeline = [
        {
            "$lookup": {
                "from": "notes",
                "localField": "TweetID",
                "foreignField": "tweetId",
                "as": "match"
            }
        }
    ]

    r = []
    for x in mycol.aggregate(pipeline):
        if (x.get("Label") != ""):
            r.append(x)        

    for x in r:
        if(x.get("match")[0].get("classification") == "NOT_MISLEADING"):
            data1["NOT_MISLEADING"][x.get("Label")] += 1
        else:
            data1["MISINFORMED_OR_POTENTIALLY_MISLEADING"][x.get("Label")] += 1

    return json.loads(json_util.dumps(data1))


@app.route("/api/newsearch/<term>")
def newsearch(term):
    number_of_items = 20
    myclient = pymongo.MongoClient("mongodb://localhost:27017/")
    mydb = myclient["birdwatchdb"]
    mycol = mydb["tweets"]

    data = []
    ids = []
    for x in mycol.find({'$text': {'$search': term}}, {'id_str':1, 'full_text':1, 'created_at':1, 'favorite_count':1, 'retweet_count':1}).sort([('retweet_count', pymongo.DESCENDING), ('favorite_count', pymongo.DESCENDING)]):
        date = x.get('created_at').split();
        data.append([x.get('id_str'), x.get('full_text'), str(date[2])+ ' ' + str(date[1])+ ' ' +str(date[5]), x.get('favorite_count'), x.get('retweet_count')])
        ids.append(x.get('id_str'))

    data = data[0:number_of_items]
    path = generateimg(ids[0:number_of_items])

    #time.sleep(2)
    #final = []
    for elem in data:
        #r = check(path, elem[0])
        #print(r)
        #if  r == "true":
        elem.append(searchnote(elem[0]))
        elem.append(searchfact(elem[0]))
        elem.append(path + elem[0] + ".png")
        #    final.append(elem)

    return json.dumps(tuple(data[0:20]))



@app.route("/api/searchfact/<id>")
def searchfact(id):
    myclient = pymongo.MongoClient("mongodb://localhost:27017/")
    mydb = myclient["birdwatchdb"]
    mycol = mydb["facts"]

    data = {"credible":0, "not_credible":0, "verifiable":0, "not_verifiable":0, "uncertain":0}
    raw = []
    for x in mycol.find({'TweetID': int(id)}, {'Label':1, 'Fact':1}):
        raw.append([x.get('Label'), x.get('Fact')]);
        if x.get('Label') in data.keys():
            data[x.get('Label')] += 1
        else:
            data[x.get('Label')] = 1

    data['data'] = raw;

    return json.loads(json_util.dumps(data))


@app.route("/api/searchnote/<id>")
def searchnote(id):
    myclient = pymongo.MongoClient("mongodb://localhost:27017/")
    mydb = myclient["birdwatchdb"]
    mycol = mydb["notes"]

    data = {"MISINFORMED_OR_POTENTIALLY_MISLEADING": 0, "NOT_MISLEADING": 0};
    raw = []
    for x in mycol.find({'tweetId': int(id)}, {'classification':1, 'summary':1}):
        raw.append([x.get('classification'), x.get('summary')]);
        if x.get('classification') in data.keys():
            data[x.get('classification')] += 1
        else:
            data[x.get('classification')] = 1

    data['data'] = raw;

    return json.loads(json_util.dumps(data))


@app.route('/api/images/<path>/<filename>')
def serve_image(path, filename):
    return send_from_directory("./temp/" + path, filename)


@app.route('/api/check/<path1>/<filename>')
def check(path1, filename):
    return str(path.exists("./temp/" + path1 + "/" + filename))


def generateimg(id_list):
    return generateImages(id_list)


if __name__ == "__main__":
	app.run()
