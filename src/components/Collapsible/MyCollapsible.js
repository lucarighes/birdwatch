import React from 'react';
import Collapsible from 'react-collapsible';
import { useState, useEffect } from 'react';
import Button from 'react-bootstrap/Button';


const MyCollapsible = (response) => {
  const [data, setData] = useState([]);
  const [id, setId] = useState([]);
  const [respointer, setRespointer] = useState(10);
  const factor = 10;
  //const [note, setNote] = useState('');

  var res = [];
  for (let [key, value] of Object.entries(response)) {
      for (let [key1, value1] of Object.entries(response[key])) {
          res.push(value1);
      }
  }

  var buttons = []
  var counter = 1;
  var local_length = res.length;
  while((local_length/(counter*factor))>0){
    buttons.push(counter);
    local_length = local_length - factor;
    counter = counter + 1;
  }

  useEffect(() => {
     fetch('/searchfact/' + id)
     .then(res => res.json())
     .then(response => {
        console.log(response);
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
          if(key != "data"){
            var li = document.createElement("li");
            li.appendChild(document.createTextNode(key + ": " + value));
            ul.appendChild(li);
          }
          else{
            var div = document.getElementById("notes-coll_"+id);
            if(value != null){
              div.innerHTML = value;
            }
          }
        }
      });

  }, [id]);


  const getFact = (id) => {
      console.log(id);
      setId(id);
  }

  function handleOnSubmit(e){
    e.preventDefault();
    setRespointer(e.target.value*factor);
  };


  return (
      <div>
      {
        res.slice(respointer-factor, respointer).map(x => (
            <Collapsible trigger=<div className="container"><div className="left-coll">{x[1]}</div><div className="notes-coll" id={"notes-coll_"+x[0]}></div><div className="right-coll">{x[2]}</div></div> transitionTime={200} onOpen={() => {
                getFact(x[0]);
            }}>
            <p><b>Claim review:</b></p>
            <ul id={"fact_"+x[0]}></ul>

            <p><b>Birdwatch review:</b></p>
            <ul id={"note_"+x[0]}></ul>

            </Collapsible>
        ))
      }
      {
        buttons.map(x => (
          x<10 ? <Button variant="primary" value={x} type="submit" className="form-button" onClick={handleOnSubmit.bind(this)}>
              {x}
          </Button> : ''

        ))
      }
      <br></br>
      <br></br>
      </div>
  );

};

export default MyCollapsible;