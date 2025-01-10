#include <string>
#include <iostream>

void usage(std::string sz_name) {
  std::cout << "Usage :" << sz_name << " <firstname> <lastname>" << std::endl;
}

int main(int ac, char **av) {
  std::cout << "Hi this is my new git repo" << std::endl;

  if (ac < 3) {
    usage(av[0]);
    return 1;
  }

  std::string sz_firstname = av[1];
  std::string sz_lastname = av[2];

  std::cout << "Hi Mr " << sz_firstname << " - " << sz_lastname << std::endl;
  
  return 0;
}
