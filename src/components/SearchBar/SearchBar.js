import React from 'react';
import { useNavigate } from 'react-router-dom';
import { useState } from 'react';
import Form from 'react-bootstrap/Form';
import Button from 'react-bootstrap/Button';

const SearchBar = () => {
    const [data, setData] = useState([]);
    const navigate = useNavigate();
    
    function handleChange(e){
      setData(e.target.value);
    }

    function handleOnSubmit(e){
      navigate(
        '/search',
        {state: {
          words: data,
        }}
      );
    };
    return (
      <React.Fragment>
          <Form className='d-flex'>
            <Form.Control type="text" placeholder="Enter words" width="50%" className="mr-sm-2" onChange={handleChange.bind(this)}/>
             
            <Button variant="primary" type="submit" className="form-button" onClick={handleOnSubmit.bind(this)}>
              Submit
            </Button>
          </Form>
      </React.Fragment>
    );
}

export default SearchBar



