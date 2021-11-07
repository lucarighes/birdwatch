import React, { useState, useEffect} from 'react';
import { ThemeProvider } from 'styled-components';
import { GlobalStyles } from './global';
import { theme } from './theme';
import Layout from './components/layout';
import Graph from './components/graph';



function App() {

  return (
    <ThemeProvider theme={theme}>
      <>
        <GlobalStyles />
          <Layout>
              <Graph></Graph>
          </Layout>
      </>
    </ThemeProvider>
  );
}

export default App;
