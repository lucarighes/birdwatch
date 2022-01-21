import { Nav, NavHeader, NavLeft, NavCenter, NavRight} from './Header.styled';

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