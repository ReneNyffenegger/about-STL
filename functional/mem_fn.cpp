//
//  g++ -std=c++11 bind.cpp
//
#include <iostream>
#include <string>
#include <functional>

struct S {

  int member;

  void print(std::string const& prefix) {
    std::cout << prefix << ": " << member << std::endl;
  }

};

int main() {

  auto f = std::mem_fn(&S::print);

  S s1; s1.member = 42;
  S s2; s2.member = 99;

  f(s1, "s1");
  f(s2, "s2");

}
