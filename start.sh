#!/bin/bash

sudo systemctl start mongod
cd ./api/ && /bin/bash start.sh &
npm start