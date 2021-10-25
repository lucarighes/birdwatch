import React from 'react';
import Navigation from './navigation';
import Header from './header';
import '../App.css';

const Layout = ({ children }) => {
    return (
    <React.Fragment>
        <div className="my_header"><Header /></div>
        <div className="navigationWrapper">
            <Navigation />
            <main>{children}</main>
        </div>
    </React.Fragment>
    );
};
export default Layout;
