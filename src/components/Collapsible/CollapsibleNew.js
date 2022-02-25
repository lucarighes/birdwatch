import React from 'react';
import Collapsible from 'react-collapsible';
import { useState, useEffect } from 'react';
import Button from 'react-bootstrap/Button';


const CollapsibleNew = (response) => {
  
  var res = [];

  for (let [key, value] of Object.entries(response)) {
    for (let [key1, value1] of Object.entries(response[key])) {
        res.push(value1[7])
    }
  }
  console.log(res);


  return (
      <div>
      {
        res.map(x => (
          <Collapsible trigger=<img src={x}></img>>
          </Collapsible>
            ))
      }
      </div>
  );

};

export default CollapsibleNew;