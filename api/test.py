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

if __name__ == "__main__":
	app.run()