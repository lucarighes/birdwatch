import { createGlobalStyle } from 'styled-components';
import 'bootstrap/dist/css/bootstrap.min.css';

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
    padding-top: 100px;
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
`
