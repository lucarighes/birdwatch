import logo from './logo.svg';
import './App.css';
import React, { useState, useEffect } from 'react';

function App() {

  const [test, setTest] = useState();

  useEffect(() => {
    fetch('/name')
    .then(res => res.json())
    .then(data => setTest(data.name))
    .catch(error => console.log(error));
  }, []);


  return (
    <div className="App">
      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <p>

          Edit <code>src/App.js</code> and save to reload. 
        </p>
        <a
          className="App-link"
          href="https://reactjs.org"
          target="_blank"
          rel="noopener noreferrer"
        >
          Learn React
        </a>
        <p>Hello {test}</p>
      </header>
    </div>
  );
}

export default App;
