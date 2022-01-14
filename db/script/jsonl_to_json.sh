#!/bin/bash


cat  ~/birdwatch/db/data/birdwatch_tweet.jsonl | sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/,/g'  | sed 's/n/,/' | sed 's/^/[/'| sed 's/$/]/' > ~/birdwatch/db/data/birdwatch_tweet.json