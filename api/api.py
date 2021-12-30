from __future__ import print_function
from flask import Flask, jsonify, json
from flask_pymongo import PyMongo
from bson import json_util
import pymongo, sys
from script.TimeGraph import compute



app = Flask(__name__)
app.config["MONGO_URI"] = "mongodb://localhost:27017/birdwatch"
mongo = PyMongo(app)


@app.route("/graphcount")
def home_page():
    myclient = pymongo.MongoClient("mongodb://localhost:27017/")
    mydb = myclient["birdwatchdb"]
    mycol = mydb["notes"]

    data = []
    for x in mycol.find({}, {'createdAtMillis':1}):
        data.append(x.get('createdAtMillis'))
    
    res = compute(data)
    return json.dumps(res) 


@app.route("/graphtopics")
def graph_topics():
    return home_page()


@app.route("/notefacts/<notes>/<facts>")
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



@app.route("/notefactstat")
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
        if(x.get("classification") == "NOT_MISLEADING"):
            data1["NOT_MISLEADING"][x.get("Label")] += 1
        else:
            data1["MISINFORMED_OR_POTENTIALLY_MISLEADING"][x.get("Label")] += 1

    return json.loads(json_util.dumps(data1))


@app.route("/search/<term>")
def search(term):
    myclient = pymongo.MongoClient("mongodb://localhost:27017/")
    mydb = myclient["birdwatchdb"]
    mycol = mydb["notes"]

    data = {}
    for x in mycol.find({'$text': {'$search': term}}, {'tweetId':1, 'summary':1}):
        data[x.get('tweetId')] = x.get('summary')
    
    return json.loads(json_util.dumps(data))


@app.route("/searchfact/<id>")
def searchfact(id):
    myclient = pymongo.MongoClient("mongodb://localhost:27017/")
    mydb = myclient["birdwatchdb"]
    mycol = mydb["facts"]

    data = {}
    for x in mycol.find({'TweetID': int(id)}, {'Label':1, 'Fact':1}):
        if x.get('Label') in data.keys():
            data[x.get('Label')] += 1
        else:
            data[x.get('Label')] = 1

    return json.loads(json_util.dumps(data))


@app.route("/searchnote/<id>")
def searchnote(id):
    myclient = pymongo.MongoClient("mongodb://localhost:27017/")
    mydb = myclient["birdwatchdb"]
    mycol = mydb["notes"]

    data = {}
    for x in mycol.find({'tweetId': int(id)}, {'classification':1}):
        if x.get('classification') in data.keys():
            data[x.get('classification')] += 1
        else:
            data[x.get('classification')] = 1

    return json.loads(json_util.dumps(data))


if __name__ == "__main__":
	app.run()
