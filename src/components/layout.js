import React from 'react';
import Header from './Header/index';
import Main from './Main/index'
import GraphQuantityTrend from './GraphQuantityTrend/index';
import GraphTopics from './GraphTopics/GraphTopics'
import {
  BrowserRouter as Router,
  Routes,
  Route,
} from "react-router-dom";

const Layout = () => {
    return (
    <React.Fragment>
        <Header />
        <div className="navigationWrapper">
            <main>
            <Router>      
                <Routes>
                  <Route path="/" element={<Main />} />
                  <Route path="/graphquantitytrend" element={<GraphQuantityTrend />} />
                  <Route path="/graphtopics" element={<GraphTopics />} />
                </Routes>
            </Router>
            </main>
        </div>
    </React.Fragment>
    );
};
export default Layout;
