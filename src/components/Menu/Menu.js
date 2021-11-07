import React from 'react';
import { bool } from 'prop-types';
import { StyledMenu } from './Menu.styled';

const Menu = ({ open }) => {
  return (
    <StyledMenu open={open}>
      <a href="/">Graph 1</a>
      <a href="/">Graph 2 </a>
      <a href="/">Graph 3</a>
    </StyledMenu>
  )
}
Menu.propTypes = {
  open: bool.isRequired,
};
export default Menu;
