import csv


listTweets = []

with open('../Downloads/Lucas.csv', newline='') as csvfile:
     for row in csvfile:
        listTweets.append(row.split()[1])
        
print(listTweets[0])
