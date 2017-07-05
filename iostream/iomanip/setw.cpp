#include <iostream>
#include <iomanip>

int main() {

  std::cout << std::left << std::setw(6) << "one"   << std::setw(5) << "eins" << std::left << "une"     << std::endl;
  std::cout << std::left << std::setw(6) << "two"   << std::setw(5) << "zwei" << std::left << "due"     << std::endl;
  std::cout << std::left << std::setw(6) << "three" << std::setw(5) << "drei" << std::left << "tre"     << std::endl;
  std::cout << std::left << std::setw(6) << "four"  << std::setw(5) << "vier" << std::left << "quattro" << std::endl;
  std::cout << std::left << std::setw(6) << "five"  << std::setw(5) << "fünf" << std::left << "cinque"  << std::endl; // TODO fünf doesn't really seem to align

}
