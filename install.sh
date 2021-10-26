#!/bin/bash

#General tools
sudo apt install -y apparmor apturl
sudo apt install npm

#Mongo installation
wget -qO - https://www.mongodb.org/static/pgp/server-5.0.asc | sudo apt-key add -
echo "deb [ arch=amd64,arm64 ] https://repo.mongodb.org/apt/ubuntu focal/mongodb-org/5.0 multiverse" | sudo tee /etc/apt/sources.list.d/mongodb-org-5.0.list
sudo apt-get update
sudo apt-get install -y mongodb-org
sudo systemctl start mongod
mongorestore -d birdwatchdb ./birdwatchdb

#Flask
cd api
sudo apt install python3.8-venv
sudo apt install python3-pip
sudo apt install python3-flask
python3 -m venv venv
source venv/bin/activate
cd ..
pip install -r ./requirements.txt
