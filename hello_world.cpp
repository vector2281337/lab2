#include <iostream>
#include <string>

// Main function that asks for user name
// and prints greeting message.
int main() {
  std::string name;  // Variable to store user name.
  std::cout << "Enter your name: ";
  std::cin >> name;
  std::cout << "Hello world from " << name << std::endl;
  return 0;
}
