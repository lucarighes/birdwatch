import React from 'react';
import Navigation from './navigation';
import Header from './Header/index';
import '../App.css';

const Layout = ({ children }) => {
    return (
    <React.Fragment>
        <Header />
        <div className="navigationWrapper">
            <Navigation />
            <main>{children}</main>
        </div>
    </React.Fragment>
    );
};
export default Layout;
