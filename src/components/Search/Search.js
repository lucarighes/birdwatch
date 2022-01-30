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
    const [factcheck, setFactcheck] = useState(0);


    const {state} = useLocation();
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
    }, [word, factcheck]);

    
    function handleChange(e){
      setBar(e.target.value);
    }

    function handleCheck(e){
      factcheck == 1 ? setFactcheck(0) :  setFactcheck(1);
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
              <Form.Group controlId="formBasicCheckbox">
                 <Form.Check type="checkbox" className="form-check" label="Only facts" onClick={handleCheck}/>
              </Form.Group>

            </Form>


            <p>These are the results for - {word}</p>
            <br></br>
            <Collapsible response={data} factcheck={data, factcheck}/>
          </div>
          <div className="three"><span></span></div>
        </div>
      </React.Fragment>
    );
}

export default Search