import React from 'react';
import GraphQuantityTrend from '../GraphQuantityTrend/GraphQuantityTrend';
import SearchBar from '../SearchBar/index.js';



const Main = () => {

  return (
    <React.Fragment>
      <div className="wrapper">
        <div className="one"><span></span></div>
        <div className="two">
          <h1><b>Home Page</b></h1>
          <h5>Fact checking tweets using crawd</h5>
          <SearchBar />
          
          <GraphQuantityTrend />
        </div>
        <div className="three"><span></span></div>
      </div>
    </React.Fragment>
  );
}

export default Main