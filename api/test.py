from flask import Flask, jsonify, json
from flask_pymongo import PyMongo
import pymongo

app = Flask(__name__)
app.config["MONGO_URI"] = "mongodb://localhost:27017/birdwatch"
mongo = PyMongo(app)


@app.route("/name")
def home_page():
    myclient = pymongo.MongoClient("mongodb://localhost:27017/")
    mydb = myclient["birdwatchdb"]
    mycol = mydb["birdwatch"]

    x = mycol.find_one({}, {'name':1, "_id":0})
    return json.dumps(x)


if __name__ == "__main__":
	app.run()