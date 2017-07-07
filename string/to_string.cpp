//
//   g++ -std=c++11 to_string.cpp
//
#include <string>
#include <iostream>

int main() {

  bool b = true;

  std::string b_str = std::to_string(b);

  std::cout << b_str << std::endl;

}
