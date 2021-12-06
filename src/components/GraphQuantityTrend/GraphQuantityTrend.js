import React, { useState, useEffect } from 'react';
import { AreaChart, Area, XAxis, YAxis, Tooltip, CartesianGrid, ResponsiveContainer } from 'recharts';

const GraphQuantityTrend = () => {
    const [data, setData] = useState();

    useEffect(() => {
      fetch('/graphcount')
      .then(res => res.json())
      .then(data => setData(data))
      .catch(error => console.log(error));
    }, []);


    return (
      <React.Fragment>
        <div className="wrapper">
          <div className="one"><span></span></div>
          
          <div className="two">
            <h1>Tweets trend</h1>
            <p>This graph reports the number of tweets overtime</p>
            <br></br>
            <br></br>
            <ResponsiveContainer width={"100%"} height={"80%"}>
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
                  <Area type="monotone" dataKey="count" stroke="#8884d8" fillOpacity={1} fill="url(#colorUv)" />
              </AreaChart>
            </ResponsiveContainer>
          </div>
          <div className="three"><span></span></div>
        </div>
      </React.Fragment>
    );
}

export default GraphQuantityTrend