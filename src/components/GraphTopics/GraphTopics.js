import React, { useState, useEffect } from 'react';
import Form from 'react-bootstrap/Form';
import TableStat from '../TableStat/TableStat';
import TableExt from '../TableExt/TableExt';

const GraphTopics = () => {
    const [note, setNote] = useState("empty");
    const [fact, setFact] = useState("empty");
    const [data, setData] = useState([]);


    function handleClickFact(e){
        setFact(e.target.value);
    };

    function handleClickNote(e){
        setNote(e.target.value);
    };

    useEffect(() => {
        fetch('/notefacts/' + note + '/' + fact)
        .then(res => res.json())
        .then(response => setData(response));
    }, [fact, note]);


    return (
      <React.Fragment>
        <div className="splitScreen">
          <div className="leftPane">
              <div className="leftPane.left"><span></span></div>
              <div className="leftPane.center">
              <TableStat />
              <br></br><br></br><br></br>
              <label>Select a filter</label>
              <br></br><br></br>
              <Form>
                  <Form.Control as="select" onChange={handleClickFact.bind(this)}>
                    <option value="empty">NULL</option>
                    <option value="credible">Credible</option>
                    <option value="not_credible">Not Credible</option>
                    <option value="verifiable">Verifiable</option>
                    <option value="not_verifiable">Not Verifiable</option>
                    <option value="uncertain">Uncertain</option>
                  </Form.Control>
                  <br></br>
                  <Form.Control as="select" onChange={handleClickNote.bind(this)}>
                    <option value="empty">NULL</option>
                    <option value="NOT_MISLEADING">Not Misleading</option>
                    <option value="MISINFORMED_OR_POTENTIALLY_MISLEADING">Misinformed</option>
                  </Form.Control>
              </Form>
              </div>
              <div className="leftPane.right"><span></span></div>
          </div>
          <div className="rightPane">
              <div className="leftPane.left"><span></span></div>
              <div className="leftPane.center">
                <TableExt response={data} />
              </div>
              <div className="leftPane.right"><span></span></div>
          </div>
        </div>
        
      </React.Fragment>
    );
}

export default GraphTopics