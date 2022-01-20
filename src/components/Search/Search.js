import React from 'react';
import { useLocation, useNavigate } from 'react-router-dom';
import { useState, useEffect } from 'react';
import Collapsible from '../Collapsible/index.js';
import Form from 'react-bootstrap/Form';
import Button from 'react-bootstrap/Button';


const Search = () => {
    const [data, setData] = useState([]);
    const [bar, setBar] = useState([]);
    const [word, setWord] = useState([]);

    const {state} = useLocation();
    const navigate = useNavigate();
    const { words } = state;

    
    useEffect(() => {
        setWord(words);
        fetch('/api/newsearch/' + words)
        .then(res => res.json())
        .then(response => setData(response));
    }, []);

    useEffect(() => {
        fetch('/api/newsearch/' + word)
        .then(res => res.json())
        .then(response => setData(response));
    }, [word]);

    
    function handleChange(e){
      setBar(e.target.value);
    }

    function handleOnSubmit(e){
      e.preventDefault();
      setWord(bar);
    };


    return (
      <React.Fragment>
        <div className="wrapper">
          <div className="one"><span></span></div>
          <div className="two">
            <Form className='d-flex' onSubmit={handleOnSubmit}>
              <Form.Control type="text" placeholder="Enter words" width="50%" className="mr-sm-2" onChange={handleChange.bind(this)}/>
               
              <Button variant="primary" type="submit" className="form-button" onClick={handleOnSubmit}>
                Submit
              </Button>
            </Form>


            <p>These are the results for - {word}</p>
            <Collapsible response={data} />
          </div>
          <div className="three"><span></span></div>
        </div>
      </React.Fragment>
    );
}

export default Search