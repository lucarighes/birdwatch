#!/bin/bash

mongoimport --type csv -d birdwatchdb -c facts --headerline --drop facts_import.csv
#mongosh db.notes.createIndex( { summary: "text" } ) #need to change this index with the tweets' text
