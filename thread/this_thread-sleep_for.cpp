#include <iostream>
#include <thread>
#include <chrono>

int main() {

  std::cout << "Started, going to sleep for two second" << std::endl;

  std::this_thread::sleep_for(std::chrono::seconds(2));

  std::cout << "Slept two seconds" << std::endl;

}
