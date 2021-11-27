from flask import Flask, jsonify, json
from flask_pymongo import PyMongo
from bson import json_util
import pymongo, sys

import TimeGraph

app = Flask(__name__)
app.config["MONGO_URI"] = "mongodb://localhost:27017/birdwatch"
mongo = PyMongo(app)


@app.route("/name")
def home_page():
    myclient = pymongo.MongoClient("mongodb://localhost:27017/")
    mydb = myclient["birdwatchdb"]
    mycol = mydb["notes"]

    data = []
    for x in mycol.find({}, {'createdAtMillis':1}):
        data.append(x.get('createdAtMillis'))
    
    res = TimeGraph.compute(data)
    print(res)
    return json.dumps(res) #json.dumps(res.values)


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
            #res = {"note": x.get("Label"), "fact": elem.get("classification"), "tweet": elem.get("summary") }
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

    data = {}
    data["NOT_MISLEADING"] = {"credible":0, "not_credible":0, "verifiable":0, "not_verifiable":0, "uncertain":0}
    data["MISINFORMED_OR_POTENTIALLY_MISLEADING"] = {"credible":0, "not_credible":0, "verifiable":0, "not_verifiable":0, "uncertain": 0}

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
            if (x.get("Label") != ""):
                if(elem.get("classification") == "NOT_MISLEADING"):
                    temp = data[elem.get("classification")]
                    temp[x.get("Label")] = temp[x.get("Label")] +1
                else:
                    temp = data[elem.get("classification")]
                    temp[x.get("Label")] = temp[x.get("Label")] +1

    return json.loads(json_util.dumps(data))


if __name__ == "__main__":
	app.run()