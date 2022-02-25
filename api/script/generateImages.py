import pymongo, sys, os

def generateImages(tweets):
    myclient = pymongo.MongoClient("mongodb://localhost:27017/")
    mydb = myclient["birdwatchdb"]
    mycol = mydb["tweets"]

    data = []
    stream = ""
    for tweet in tweets:
    	for elem in mycol.find({'id_str': tweet}, {'full_text': 1, 'created_at': 1, 'user': 1}):
        	data.append([elem.get('full_text'), elem.get('created_at'), elem.get('user').get('name'), elem.get('user').get('screen_name'), elem.get('user').get('profile_image_url_https')])

    for elem in data:
        stream = os.popen("python3 ../../tweet-image-generator/generate-tweet-image.py --text \"" + elem[0] + "\" --date-text \"" + elem[1] + "\" --twitter-account \"" + elem[2] + "\" --twitter-name \"" + elem[3] + "\" --image-url \"" + elem[4] + "\" --is-verified true")
    	

    return stream.read()


if __name__ == "__main__":
    generateImages(["1352754599590035459"])