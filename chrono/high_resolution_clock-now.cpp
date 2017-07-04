#include <chrono>
#include <iostream>
#include <thread>

int main() {


  auto t0 = std::chrono::high_resolution_clock::now();

  std::cout << "Filling time between t0 and t1" << std::endl;

  std::this_thread::sleep_for(std::chrono::milliseconds(17));

  auto t1 = std::chrono::high_resolution_clock::now();

  std::chrono::duration<float> t_diff = t1 - t0;

  std::chrono::milliseconds t_diff_ms = std::chrono::duration_cast<std::chrono::milliseconds>(t_diff);

  std::cout << "t_diff_ms = " << t_diff_ms.count() << std::endl;

}
