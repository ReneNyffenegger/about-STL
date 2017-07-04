#include <atomic>
#include <thread>
#include <iostream>

            unsigned long long  ull  ;
std::atomic<unsigned long long> ull_a;

void thread() {

  for (int i=0; i<1000000; i++) {
    ull  ++;
    ull_a++;

  }

}

int main () {

  ull   = 0;
  ull_a = 0;

  std::thread t1(thread);
  std::thread t2(thread);
  std::thread t3(thread);
  std::thread t4(thread);
  std::thread t5(thread);

  t1.join();
  t2.join();
  t3.join();
  t4.join();
  t5.join();

  std::cout << "ull:   " << ull   << std::endl;
  std::cout << "ull_a: " << ull_a << std::endl;

}


