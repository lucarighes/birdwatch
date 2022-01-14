import json
import os


with open("birdwatchdb_tweet.json", 'r') as json_file:
    json_decoded = json.load(json_file)


out_dict = {}
for elem in json_decoded:
    out_dict[elem['id']] = elem 


with open("birdwatchdb_tweets.json", 'w') as json_file:
    json.dump(out_dict, json_file)