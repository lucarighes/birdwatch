import { Nav, NavHeader, NavLeft, NavCenter, NavRight} from './Header.styled';

const Header = () => {    
    return (
        <Nav>
          <NavHeader>
            <NavLeft>
                  
            </NavLeft>
            <NavCenter><a href="../">BirdWatch Observatory</a></NavCenter>
            <NavRight> 
                <a href="../graphtopics">Filter data</a>
            </NavRight>
            
          </NavHeader>
        </Nav>
        
        );
};
export default Header;