import pymongo, sys, os, time, subprocess

def generateImages(tweets):
    path = "/home/luca/birdwatch/api/"
    myclient = pymongo.MongoClient("mongodb://localhost:27017/")
    mydb = myclient["birdwatchdb"]
    mycol = mydb["tweets"]

    folder = time.time()
    folder = str(folder).replace('.', '')

    data = []
    stream = ""
    for tweet in tweets:
        stream = stream + tweet
        for elem in mycol.find({'id_str': tweet}, {'full_text': 1, 'created_at': 1, 'user': 1, 'id_str': 1}):
        	data.append([elem.get('full_text'), elem.get('created_at'), elem.get('user').get('name'), elem.get('user').get('screen_name'), elem.get('user').get('profile_image_url_https'), elem.get('user').get('verified'), elem.get('id_str')])

    os.popen("mkdir " + path + "temp/" + folder)
    for elem in data:
        os.popen("python3 ../tweet-image-generator/generate-tweet-image.py --text \"" + elem[0] + "\" --date-text \"" + elem[1] + "\" --twitter-account \"" + elem[2] + "\" --twitter-name \"" + elem[3] + "\" --image-url \"" + elem[4] + "\" --is-verified " + str(elem[5]) + " --destination \"" + path + "temp/" + folder + "/" + elem[6] + ".png\"") 
    
    #p = subprocess.Popen("mkdir " + path + "temp/" + folder, stdout=subprocess.PIPE, shell=True)	
    #(output, err) = p.communicate()  
    #p_status = p.wait()

    #for elem in data:
    #    p = subprocess.Popen("python3 ../tweet-image-generator/generate-tweet-image.py --text \"" + elem[0] + "\" --date-text \"" + elem[1] + "\" --twitter-account \"" + elem[2] + "\" --twitter-name \"" + elem[3] + "\" --image-url \"" + elem[4] + "\" --is-verified " + str(elem[5]) + " --destination \"" + path + "temp/" + folder + "/" + elem[6] + ".png\"") 
    #    (output, err) = p.communicate()  
    #    p_status = p.wait()
     #   print(p_status)

        
    return "temp/" + folder + "/"
