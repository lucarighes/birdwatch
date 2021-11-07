import { Nav, NavHeader, NavLeft, NavCenter, NavRight} from './Header.styled';
import FocusLock from 'react-focus-lock';
import { useOnClickOutside } from '../../hooks';
import Burger from '../Burger/index';
import Menu from '../Menu/index';
import React, { useState, useEffect, useRef } from 'react';



const Header = () => {
    const [open, setOpen] = useState(false);
    const node = useRef();
    const menuId = "main-menu";

    useOnClickOutside(node, () => setOpen(false));
    
    return (
        <Nav>
          <NavHeader>
            <NavLeft>
                  <div ref={node}>
                    <FocusLock disabled={!open}>
                      <Burger open={open} setOpen={setOpen} aria-controls={menuId} />
                      <Menu open={open} setOpen={setOpen} id={menuId} />
                    </FocusLock>
                  </div>
            </NavLeft>
            <NavCenter>Birdwatch</NavCenter>
            <NavRight> </NavRight>
            
          </NavHeader>
        </Nav>
        
        );
};
export default Header;