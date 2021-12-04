import React from 'react'
import Table from 'react-bootstrap/Table';

const TableExt = (response) => {

    var res = [];

    for (let [key, value] of Object.entries(response)) {
        for (let [key1, value1] of Object.entries(response[key])) {
            res.push(value1);
        }
    }

    return (
         <div className="table">
         	<Table striped bordered hover>
         		<thead>
         			<tr>
         				<th>Tweet ID</th>
         				<th>Note</th>
         				<th>Fact</th>
     				</tr>
 				</thead>
 				<tbody>
                    {
                        res.map(x => (
                            <tr>
                                <td>{x[0]}</td>
                                <td>{x[1]}</td>
                                <td>{x[2]}</td>
                            </tr>
                        ))
                    }
         		</tbody>
         	</Table>
         </div>
      );
  	}

export default TableExt