#include <iostream>
#include <string>
int main() {

  std::cout << "Please type first string: ";
  std::string first, second;
  bool size = true;
  std::cin >> first;

  std::cout << "Please type second string: ";
  std::cin >> second;


  if (first.size() == second.size()){
    std::cout << "both strings are same size";
    size = false;
  }
  else if (first.size() < second.size()){

    std::cout << second << " is longer then " << first;

  } else {
      std::cout << first << " is longer then " << second;

  }

  return 0;
}