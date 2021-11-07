import { createGlobalStyle } from 'styled-components';

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
    font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, Helvetica, Arial, sans-serif, "Apple Color Emoji", "Segoe UI Emoji", "Segoe UI Symbol";
    height: 100vh;
    justify-content: center;
    text-rendering: optimizeLegibility;
  }
  .my_header {
    background-color: rgb(29, 161, 242);
    color:  white;
    height: 10%;
    align-items: center;
    display: flex;
    margin:  auto;
  }

  .navigationWrapper{
      height: 90%;
      align-items: center;
      display: flex;
      justify-content: center;
  }

  .my_title {
    padding-left: 20px;
  }

  .graphArea {
      width: 600px;
      height:  500px;
  }
`
