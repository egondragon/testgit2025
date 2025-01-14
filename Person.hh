#ifndef _PERSON_HH_
#define _PERSON_HH_

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

#endif
