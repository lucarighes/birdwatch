#!/bin/bash

sudo mongoimport --db birdwatchdb --collection notes --file data/birdwatchdb_notes.json
sudo mongoimport --db birdwatchdb --collection facts --file data/birdwatchdb_facts.json

