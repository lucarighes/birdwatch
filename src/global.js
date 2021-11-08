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
    font-family: sans-serif;
    height: 100vh;
    justify-content: center;
    text-rendering: optimizeLegibility;
  }

  .navigationWrapper{
      height: 90%;
      align-items: center;
      display: flex;
      justify-content: center;
  }

  .graphArea {
      width: 600px;
      height:  500px;
  }
`
