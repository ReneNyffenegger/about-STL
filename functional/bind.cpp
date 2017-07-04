//
//  g++ -std=c++11 bind.cpp
//
#include <string>
#include <iostream>
#include <functional>


void f(int i, std::string s, char b) {
  std::cout << "i="<<i << ", s="<<s<< ", b=" << b << std::endl;
}

int main() {

    auto bound_1 = std::bind(f, 42                   , "foo"                 , 'a');
    auto bound_2 = std::bind(f, 18                   , std::placeholders::_1 , 'b');
    auto bound_3 = std::bind(f, std::placeholders::_2, std::placeholders::_1 , 'c');

    bound_1();
    bound_2("bar");
    bound_3("baz", 99);

}
