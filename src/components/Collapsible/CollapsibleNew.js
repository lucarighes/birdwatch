import React from 'react';
import Collapsible from 'react-collapsible';
import { useState, useEffect } from 'react';
import Button from 'react-bootstrap/Button';


const CollapsibleNew = (response) => {
  const res = [];
  for (let [key, value] of Object.entries(response)) {
    for (let [key1, value1] of Object.entries(response[key])) {
      res.push(value1[7]);
    }
  }

  return (
      <div>
      {
        res.map(x => (
          <Collapsible trigger=<img width="800" height="300" src={"/api/images/"+ x.split("/").slice(-2)[0] + "/" + x.split("/").slice(-1)[0]}></img>>
          </Collapsible>
            ))
      }
      </div>
  );

};

export default CollapsibleNew;