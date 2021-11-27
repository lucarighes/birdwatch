import React, { useState, useEffect }from 'react'
import Table from 'react-bootstrap/Table';

const TableStat = () => {
    const [mis, setMis] = useState([]);
    const [notmis, setNotmis] = useState([]);

    useEffect(() => {
        fetch('/notefactstat')
        .then(res => res.json())
        .then(response => {
          setMis(response['MISINFORMED_OR_POTENTIALLY_MISLEADING'])
          setNotmis(response['NOT_MISLEADING'])
        })
    });
    return (
         <div className="table">
         	<Table striped bordered hover>
         		<thead>
         			<tr>
         				<th>#</th>
         				<th>MISINFORMED_OR_POTENTIALLY_MISLEADING</th>
         				<th>NOT_MISLEADING</th>
     				</tr>
 				</thead>
 				<tbody>
     				<tr>
     					<td>Credible</td>
     					<td>{mis['credible']}</td>
     					<td>{notmis['credible']}</td>
     				</tr>
     				<tr>
     					<td>Not credible</td>
     					<td>{mis['not_credible']}</td>
     					<td>{notmis['not_credible']}</td>
     				</tr>
     				<tr>
     					<td>Verifiable</td>
     					<td>{mis['verifiable']}</td>
     					<td>{notmis['verifiable']}</td>
     				</tr>
     				<tr>
     					<td>Not verifiable</td>
     					<td>{mis['not_verifiable']}</td>
     					<td>{notmis['not_verifiable']}</td>
     				</tr>
     				<tr>
     					<td>Uncertain</td>
     					<td>{mis['uncertain']}</td>
     					<td>{notmis['uncertain']}</td>
     				</tr>
         		</tbody>
         	</Table>
         </div>
      );
  	}

export default TableStat