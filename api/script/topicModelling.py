from bertopic import BERTopic

docs = []
temp = ""

file = open("all_text.txt", "r")
lines = file.readlines()
for line in lines:
	if line == "===\n":
		docs.append(temp)
		temp = ""
	else:
		temp = temp + line.rstrip()


topic_model = BERTopic(language="english", calculate_probabilities=True, verbose=True)
topics, probs = topic_model.fit_transform(docs)