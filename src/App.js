import React, { useState, useEffect} from 'react';
import { ThemeProvider } from 'styled-components';
import { GlobalStyles } from './global';
import { theme } from './theme';
import Layout from './components/layout';


function App() {

  return (
    <ThemeProvider theme={theme}>
      <>
        <GlobalStyles />
          <Layout>
            
          </Layout>
      </>
    </ThemeProvider>
  );
}

export default App;
