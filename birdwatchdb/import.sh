#!/bin/bash

mongoimport --type csv -d birdwatchdb -c facts --headerline --drop facts_import.csv
