#include <string>
#include <iostream>

class myPerson {
  std::string sz_firstname;
  std::string sz_lastname;
  
public:
  
  myPerson(std::string sz_first, std::string sz_last) {
    sz_firstname = sz_first;
    sz_lastname = sz_last;    
  }
  
  void m_display(void) const {
    std::cout << sz_firstname << " " << sz_lastname << std::endl;
  }
};
  
void usage(std::string sz_name) {
  std::cout << "Usage :" << sz_name << " <firstname> <lastname>" << std::endl;
}

int main(int ac, char **av) {
  std::cout << "Hi, we are in the master branch" << std::endl;

  if (ac < 3) {
    usage(av[0]);
    return 1;
  }
  myPerson *p = new myPerson(av[1], av[2]);;
  
  std::cout << "Hi Mr ";
  p->m_display();
  
  delete p;
    
  return 0;
}
