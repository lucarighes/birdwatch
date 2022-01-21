import React from 'react';
import Collapsible from 'react-collapsible';
import { useState, useEffect } from 'react';
import Button from 'react-bootstrap/Button';


const MyCollapsible = (response) => {
  const [id, setId] = useState([]);
  const [fact, setFact] = useState([]);
  const [note, setNote] = useState([]);
  const [respointer, setRespointer] = useState(10);
  const factor = 10;

  var res = [];

  useEffect(() => {setRespointer(factor);}, [response])

  for (let [key, value] of Object.entries(response)) {
      for (let [key1, value1] of Object.entries(response[key])) {
        if(value1[5]["NOT_MISLEADING"] == value1[5]["MISINFORMED_OR_POTENTIALLY_MISLEADING"]){
          value1.push({'notes':0});
        }
        else{
          if(value1[5]["NOT_MISLEADING"] > value1[5]["MISINFORMED_OR_POTENTIALLY_MISLEADING"]){
            value1.push({'notes':1});
          }
          else{
            value1.push({'notes':2});
          }
        }
        var items = Object.keys(value1[6]).map((key) => {
          if(key != 'data'){         
              return [key, value1[6][key]];
          }   
        });
        items.sort((first, second) => { return second[1] - first[1] });
        if(items[0][1] == 0){
          value1.push({'facts': 3});
        }
        else{
          
          if(items[0][0] == 'credible'){
            value1.push({'facts': 4});
          }
          else{
            if(items[0][0] == 'not_credible'){
              value1.push({'facts': 5});
            }
            else{
              value1.push({'facts': 6});
            }
          }
        }
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
    if(id.length > 0){
      var ul = document.getElementById("note_"+id);
      ul.innerHTML = '';

      for (let [key, value] of Object.entries(note)) {
        if(key == "data"){
          for(let [key1, value1] of Object.entries(value)){
              var li = document.createElement("li");
              li.appendChild(document.createTextNode(value1[0] + ": " + value1[1])); 
              ul.appendChild(li);
          }
        }
        
      }

      var ul = document.getElementById("fact_"+id);
      ul.innerHTML = '';

      for (let [key, value] of Object.entries(fact)) {
        if(key == "data"){
          for(let [key1, value1] of Object.entries(value)){
              var li = document.createElement("li");
              li.appendChild(document.createTextNode(value1[0] + ": " + value1[1])); 
              ul.appendChild(li);
          }
        }
      }
    }
  }, [id]);


  const getFact = (id, note, fact) => {
      setFact(fact);
      setNote(note);
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
            <Collapsible trigger=<div className="container"><div className="left-coll">{x[1]}</div><div className="right-coll">{x[2]}<br></br><br></br>{
              x[7]['notes'] == 2 ? <Button variant="danger" className="display_button">{"Notes: " + String(parseInt(x[5]['MISINFORMED_OR_POTENTIALLY_MISLEADING'])+parseInt(x[5]['NOT_MISLEADING']))}</Button> :
              x[7]['notes'] == 1 ? <Button variant="success" className="display_button">{"Notes: " + String(parseInt(x[5]['MISINFORMED_OR_POTENTIALLY_MISLEADING'])+parseInt(x[5]['NOT_MISLEADING']))}</Button> :
                          <Button variant="light" className="display_button">{"Notes: "+String(parseInt(x[5]['MISINFORMED_OR_POTENTIALLY_MISLEADING'])+parseInt(x[5]['NOT_MISLEADING']))}</Button>
              }
              <br></br>
              {
              x[8]['facts'] == 5 ? <Button variant="danger" className="display_button">{"Facts: " + String(parseInt(x[6]['credible'])+parseInt(x[6]['not_credible'])+parseInt(x[6]['verifiable'])+parseInt(x[6]['not_verifiable'])+parseInt(x[6]['uncertain']))}</Button> :
              x[8]['facts'] == 4 ? <Button variant="success" className="display_button">{"Facts: " + String(parseInt(x[6]['credible'])+parseInt(x[6]['not_credible'])+parseInt(x[6]['verifiable'])+parseInt(x[6]['not_verifiable'])+parseInt(x[6]['uncertain']))}</Button> :
              x[8]['facts'] == 6 ?  <Button variant="warning" className="display_button">{"Facts: " + String(parseInt(x[6]['credible'])+parseInt(x[6]['not_credible'])+parseInt(x[6]['verifiable'])+parseInt(x[6]['not_verifiable'])+parseInt(x[6]['uncertain']))}</Button> :         
                          <Button variant="light" className="display_button">{"Facts: "+ String(parseInt(x[6]['credible'])+parseInt(x[6]['not_credible'])+parseInt(x[6]['verifiable'])+parseInt(x[6]['not_verifiable'])+parseInt(x[6]['uncertain']))}</Button>

            }</div></div> transitionTime={200} onOpen={() => {
                getFact(x[0], x[5], x[6]);
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