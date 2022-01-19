import { Nav, NavHeader, NavLeft, NavCenter, NavRight} from './Header.styled';
import FocusLock from 'react-focus-lock';
import { useOnClickOutside } from '../../hooks';
import Burger from '../Burger/index';
import Menu from '../Menu/index';
import React, { useState, useRef } from 'react';


const Header = () => {    
    return (
        <Nav>
          <NavHeader>
            <NavLeft>
                  
            </NavLeft>
            <NavCenter><a href="../">Birdwatch</a></NavCenter>
            <NavRight> 
                <a href="../graphtopics">Filter data</a>
                <a href="../about">About</a>
            </NavRight>
            
          </NavHeader>
        </Nav>
        
        );
};
export default Header;