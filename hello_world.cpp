#include <iostream>
#include <string>

int
main()
{
  std::string name; // Variable to store user name
  std::cout << "Enter your name: ";
  std::cin >> name;
  std::cout << "Hello world from " << name << std::endl;
  return 0;
}
