import { createGlobalStyle } from 'styled-components';
import 'bootstrap/dist/css/bootstrap.min.css';
import { FontAwesomeIcon } from '@fortawesome/react-fontawesome';

export const GlobalStyles = createGlobalStyle`

  .App {
    text-align: center;
  }
  #root {
      height: 100%;
      width: 100%;
      border: 0;
  }
  html, body{
    margin: 0;
    padding: 0;
  }
  *, *::after, *::before {
    box-sizing: border-box;
  }
  body {
    align-items: center;
    display: flex;
    background: ${({ theme }) => theme.primaryDark};
    color: ${({ theme }) => theme.primaryLight};
    font-family: sans-serif;
    height: 100%;
    justify-content: center;
    text-rendering: optimizeLegibility;
  }

  .navigationWrapper{
      height: 90%;
      align-items: center;
      display: flex;
      justify-content: center;
  }

  main {
    width: 100%;
    height: 100%;
    align-items: center;
  }

  .splitScreen {
    display: flex;
    flexDirection: row;
  }
  
  .leftPane {
      display: flex;
      flexDirection: row;
      align-items: top;
      width: 50%;
  }
  
  .rightPane {
      display: flex;
      flexDirection: row;
      align-items: top;
      width: 50%;
  }

  .leftPane.left{
      float:left;
      width: 50px;
  }

  span {
    padding-left: 50px;
  }

  .leftPane.center{
      padding-top: 50px;
  }

  .leftPane.right{
      min-width: 50px;
      height: 100%;
  }

  .table{
    padding-top: 15%;
  }

  .wrapper {
    display: grid;
    grid-template-columns: repeat(5, 1fr);
    grid-gap: 10px;
    grid-auto-rows: minmax(100px, auto);
  }

  .one{
    grid-column: 1;
    grid-row: 1;
  }
  
  .two{
    grid-column: 2/5;
    grid-row: 1;
    padding-top: 50px;
    text-align: center;
    align-items: center;
  }

  .three{
    grid-column: 5;
    grid-row: 1;
  }

  @media (max-width: 1500px){
    .splitScreen{
      display: block;
      flexDirection: column;
    }
  }

  .form-control{
    width: 50%;
    margin-left: 20%;
    margin-top: 5%;
    min-width: 200px;
  }

  .form{
    margin-left: 25%;
  }

  .form-button {
    margin-top: 5%;
    width: 8%;
    min-width: 100px;
  }

  .graph {
    width: 80%;
    height: 60%;
    margin-top: 8%;
    margin-left: 10%;
    min-width: 300px;
    min-height: 200px;
  }
  .Collapsible {
    background-color: ${({ theme }) => theme.primaryDark};
    color: ${({ theme }) => theme.primaryLight};
  }

  .Collapsible__contentInner {
    padding: 10px;
    border: 1px solid ${({ theme }) => theme.primaryLight};
    border-top: 0;

    p {
      margin-bottom: 10px;
      font-size: 14px;
      line-height: 20px;
      text-align: left;
      &:last-child {
        margin-bottom: 0;
      }
    }
  }

  .Collapsible__trigger {
    display: block;
    font-weight: 400;
    text-decoration: none;
    position: relative;
    border: 1px solid white;
    padding: 10px;
    background: ${({ theme }) => theme.primaryLight};
    color: white;


    &::after {
      font-family: 'Font Awesome 5 Free';
      font-weight: 900;
      content: '\f107';
      position: absolute;
      right: 10px;
      top: 10px;
      display: inline-block;
      transition: transform 200ms;
    }

    &.is-open {
      &:after {
        transform: rotateZ(180deg);
      }
    }

    &.is-disabled {
      opacity: 0.5;
      background-color: grey;
    }
  }

  .CustomTriggerCSS {
    background-color: lightcoral;
    transition: background-color 200ms ease; 
  }

  .CustomTriggerCSS--open {
    background-color: darkslateblue;
  }

  .Collapsible__custom-sibling {
    padding: 5px;
    font-size: 12px;
    background-color: #CBB700;
    color: black;
  }
`

