#!/bin/bash

sudo apt-get update -y

#General tools
sudo apt install -y apparmor apturl
sudo apt install -y npm

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

# Apache Lucene
#sudo apt install openjdk-8-jre openjdk-8-jdk openjdk-8-doc -y
#sudo apt install ant -y
#cd /usr/lib/jvm
#sudo ln -s java-8-openjdk-amd64 java-8-oracle
#cd ~/birdwatch/api
#sudo mkdir pylucene
#cd pylucene
#sudo wget https://dlcdn.apache.org/lucene/pylucene/pylucene-8.9.0-src.tar.gz 
#sudo tar -xvf pylucene-8.9.0-src.tar.gz
#sudo mv pylucene-8.9.0/* ./
#sudo rm -r  pylucene-8.9.0 pylucene-8.9.0-src.tar.gz
#cd jcc
#sudo python3 setup.py build
#sudo python3 setup.py install
#cd ..
#sudo rm makefile
#cp ../makefile ./
#sudo make
#sudo make test
#sudo make install
