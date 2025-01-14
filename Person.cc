#include "Person.hh"

myPerson::myPerson(std::string sz_first, std::string sz_last) {
  this->sz_firstname = sz_first;
  this->sz_lastname = sz_last;    
}
  
void myPerson::m_display(void) const {
  std::cout << sz_firstname << " " << sz_lastname << std::endl;
}
