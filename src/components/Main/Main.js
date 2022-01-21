import React from 'react';
import GraphQuantityTrend from '../GraphQuantityTrend/GraphQuantityTrend';
import SearchBar from '../SearchBar/index.js';



const Main = () => {

  return (
    <React.Fragment>
      <div className="wrapper">
        <div className="one"><span></span></div>
        <div className="two">
          
          <h5>The BirdWatch Observatory analyzes the fact-checking crowdsourcing
initiative at <a href="https://twitter.com/">Twitter</a> based on the official <a href="https://twitter.github.io/birdwatch/contributing/download-data/">data</a>.
 The data
is augmented with claim reviews wrote by expert fact-checkers for the
same fact, when available.</h5>
          <SearchBar />
          
          <GraphQuantityTrend />
          <hr></hr>
          <p>The BirdWatch Observatory is a joint effort from the teams at <a href="https://www.eurecom.fr/">EURECOM</a> and at <a href="https://www.uq.edu.au/">University of Queensland</a>. A technical paper
describing our work is available on <a href="https://www.eurecom.fr/~papotti/">request</a>.</p>
          <br></br>
          <hr></hr>
          <p><small><small>Terms of Use: This Website and its contents herein, including all data,
mapping, and analysis is provided to the public strictly for educational
and academic research purposes. The Website relies upon publicly
available data from multiple sources. EURECOM hereby disclaims any and
all representations and warranties with respect to the Website,
including accuracy, fitness for use, and merchantability. Reliance on
the Website for medical guidance or use of the Website in commerce is
strictly prohibited</small></small></p>
        <br></br>
        </div>
        <div className="three"><span></span></div>
      </div>
    </React.Fragment>
  );
}

export default Main