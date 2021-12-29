import React from 'react';
import Collapsible from 'react-collapsible';

const MyCollapsible = (response) => {

  var res = [];

  for (let [key, value] of Object.entries(response)) {
      for (let [key1, value1] of Object.entries(response[key])) {
          res.push([key1, value1]);
      }
  }


  return (
      <div>
      {
        res.map(x => (
            <Collapsible trigger={x[0]}>
            <p>{x[1]}</p>
            </Collapsible>
        ))
      }
      </div>
  );
};

export default MyCollapsible;