import React, { useState, useEffect } from 'react';
import { AreaChart, Area, XAxis, YAxis, Tooltip, CartesianGrid, ResponsiveContainer } from 'recharts';


const GraphTopics = () => {
    const [data, setData] = useState();

    useEffect(() => {
      fetch('/graphtopics')
      .then(res => res.json())
      .then(data => setData(data))
      .catch(error => console.log(error));
    }, []);


    return (
      <React.Fragment>
        <div className="graphArea">
        <ResponsiveContainer>
          <AreaChart data={data} margin={{ top: 10, right: 30, left: 0, bottom: 0 }}>
              <defs>
                <linearGradient id="colorUv" x1="0" y1="0" x2="0" y2="1">
                  <stop offset="5%" stopColor="#8884d8" stopOpacity={0.8}/>
                  <stop offset="95%" stopColor="#8884d8" stopOpacity={0}/>
                </linearGradient>
              </defs>
              <XAxis dataKey="name" />
              <YAxis />
              <CartesianGrid strokeDasharray="3 3" />
              <Tooltip />
              <Area type="monotone" dataKey="uv" stroke="#000000" fillOpacity={1} fill="#000000" />
            </AreaChart>
        </ResponsiveContainer>
        </div>
      </React.Fragment>
    );
}

export default GraphTopics