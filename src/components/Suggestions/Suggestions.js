import React from 'react';
import { useNavigate } from 'react-router-dom';


const Suggestions = () => {
    const navigate = useNavigate();

  function handleOnSubmitDaunte(e){
    e.preventDefault();
    navigate(
      '/search',
      {state: {
        words: "Daunte Wright",
      }}
    );
    return false;
  };

  function handleOnSubmitBrian(e){
    e.preventDefault();
    navigate(
      '/search',
      {state: {
        words: "Brian Sicknick",
      }}
    );
    return false;
  };

    return (
      <div className="suggestions">
        <p>Here some examples: {" "}
        <small>
        <a href="Daunte Wright" onClick={handleOnSubmitDaunte.bind(this)}>Daunte Wright</a>{",   "}
        <a href="Brian Sicknick" onClick={handleOnSubmitBrian.bind(this)}>Brian Sicknick</a>
        </small>
        </p>
      </div>
    );
}

export default Suggestions