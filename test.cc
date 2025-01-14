#include "Person.hh"

void usage(std::string sz_name) {
  std::cout << "Usage :" << sz_name << " <firstname> <lastname>" << std::endl;
}

int main(int ac, char **av) {
  std::cout << "Hi, we are in the experiment branch" << std::endl;
  std::cout << "Hi, we are in the rebased master branch" << std::endl;

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
