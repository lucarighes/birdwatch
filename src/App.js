import React, { useState, useEffect } from 'react';
import Layout from './components/layout';

function App() {

  const [test, setTest] = useState();

  useEffect(() => {
    fetch('/name')
    .then(res => res.json())
    .then(data => setTest(data.name))
    .catch(error => console.log(error));
  }, []);


  return (
      <Layout>{test}</Layout>
  );
}

export default App;
