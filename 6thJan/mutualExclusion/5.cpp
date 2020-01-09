// unique_lock example
/*
	unique_lock object does not manage the lifetime of the mutex object in any way: the duration of the mutex object shall extend at least until the destruction of the unique_lock that manages it.
*/
#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <mutex>          // std::mutex, std::unique_lock

std::mutex mtx;           // mutex for critical section

void print_block (int n, char c) {
  // critical section (exclusive access to std::cout signaled by lifetime of lck):
  std::unique_lock<std::mutex> lck (mtx);
  for (int i=0; i<n; ++i) { std::cout << c; }
  std::cout << '\n';
}

int main ()
{
	for(int i=0; i<10; i++)
	{
		std::thread th1 (print_block,50,'*');
		std::thread th2 (print_block,50,'$');

		th1.join();
		th2.join();
	}
  return 0;
}
