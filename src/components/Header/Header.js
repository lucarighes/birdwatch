import { Nav, NavHeader, NavLeft, NavCenter, NavRight} from './Header.styled';
import FocusLock from 'react-focus-lock';
import { useOnClickOutside } from '../../hooks';
import Burger from '../Burger/index';
import Menu from '../Menu/index';
import React, { useState, useRef } from 'react';

/* <div ref={node}>
                    <FocusLock disabled={!open}>
                      <Burger open={open} setOpen={setOpen} aria-controls={menuId} />
                      <Menu open={open} setOpen={setOpen} id={menuId} />
                    </FocusLock>
                  </div> */

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