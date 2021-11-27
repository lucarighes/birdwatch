from flask import Flask
from flask_pymongo import PyMongo
import pymongo, sys


def fetch():
    myclient = pymongo.MongoClient("mongodb://localhost:27017/")
    mydb = myclient["birdwatchdb"]
    mycol = mydb["notes"]

    data = []
    for x in mycol.find({}, {'tweetId':1}):
        data.append(x.get('tweetId'))
    printToFile(data)


def printToFile(data):
    with open('notes.txt', 'w') as f:
        for string in data:
            f.write(str(string))
            f.write('\n')
    print("Done")


if __name__ == "__main__":
	fetch()