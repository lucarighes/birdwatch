#!/bin/bash

sudo mongoexport --db birdwatchdb -c notes --out birdwatchdb_notes.json
sudo mongoexport --db birdwatchdb -c facts --out birdwatchdb_facts.json

rm data/birdwatchdb_notes.json
rm data/birdwatchdb_facts.json

mv birdwatchdb_notes.json ./data/
mv birdwatchdb_facts.json ./data/
