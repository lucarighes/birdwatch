import React from 'react';
import Header from './Header/index';
import Main from './Main/index';
import GraphQuantityTrend from './GraphQuantityTrend/index';
import GraphTopics from './GraphTopics/GraphTopics';
import About from './About/About';
import Search from './Search/Search';

import {
  BrowserRouter as Router,
  Routes,
  Route,
} from "react-router-dom";

const Layout = () => {
    return (
    <React.Fragment>
        <Header />
        <link href="https://use.fontawesome.com/releases/v5.7.0/css/all.css" rel="stylesheet" />
        <div className="navigationWrapper">
            <main>
            <Router basename="/">      
                <Routes>
                  <Route path="/" element={<Main />} />
                  <Route path="/graphquantitytrend" element={<GraphQuantityTrend />} />
                  <Route path="/graphtopics" element={<GraphTopics />} />
                  <Route path="/about" element={<About />} />
                  <Route path="/search" element={<Search />} />
                </Routes>
            </Router>
            </main>
        </div>
    </React.Fragment>
    );
};
export default Layout;
