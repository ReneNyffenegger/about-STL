//
//  g++ -std=c++11 join.cpp -lpthread 
//
#include <iostream>
#include <thread>
#include <chrono>

int the_thread() {

  int counter = 0;

  while (counter < 20) {

    std::cout << "The thread is running (counter=" << counter << ")" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    counter ++;

  }

}

int main() {

  std::thread t(the_thread);

  t.join();

  std::cout << "t.join() returned, going to sleep for another second" << std::endl;

  std::this_thread::sleep_for(std::chrono::seconds(1));
}
