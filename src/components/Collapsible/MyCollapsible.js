import React from 'react';
import Collapsible from 'react-collapsible';
import { useState, useEffect } from 'react';


const MyCollapsible = (response) => {
  const [data, setData] = useState([]);
  const [id, setId] = useState([]);
  //const [note, setNote] = useState('');

  var res = [];

  for (let [key, value] of Object.entries(response)) {
      for (let [key1, value1] of Object.entries(response[key])) {
          res.push([key1, value1]);
      }
  }
  
  useEffect(() => {
     fetch('/searchfact/' + id)
     .then(res => res.json())
     .then(response => {
        var ul = document.getElementById("fact_"+id);
        ul.innerHTML = '';

        for (let [key, value] of Object.entries(response)) {
          var li = document.createElement("li");
          li.appendChild(document.createTextNode(key + ": " + value));
          ul.appendChild(li);
        }
      });

     fetch('/searchnote/' + id)
     .then(res => res.json())
     .then(response => {
        var ul = document.getElementById("note_"+id);
        ul.innerHTML = '';

        for (let [key, value] of Object.entries(response)) {
          var li = document.createElement("li");
          li.appendChild(document.createTextNode(key + ": " + value));
          ul.appendChild(li);
        }
      });

  }, [id]);

  const getFact = (id) => {
      setId(id);
  }


  return (
      <div>
      {
        res.map(x => (
            <Collapsible trigger={x[0]} transitionTime={200} onOpen={() => {
                getFact(x[0]);
            }}>
            <p>{x[1]}</p>
            <p><b>Claim review:</b></p>
            <ul id={"fact_"+x[0]}></ul>

            <p><b>Birdwatch review:</b></p>
            <ul id={"note_"+x[0]}></ul>

            </Collapsible>
        ))
      }
      </div>
  );

};

export default MyCollapsible;