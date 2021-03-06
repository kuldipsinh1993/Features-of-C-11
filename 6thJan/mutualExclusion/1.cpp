// mutex is to secure shared resorce between multiple thread by giving access to one thread only.

#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

using namespace std;

std::mutex m;

int fun(int &num)
{
	for(int i=0; i<1000; i++)
	{
		// Way 1 : Uncomment for using mutex
		//m.lock();
		num++;
		//m.unlock();
		
		// way 2 : Automatic locking
		//const lock_guard<mutex> lock(m);
		//num++;
		
		
	}
	return num;
}
int main()
{
	int a = 0;
	for(int i=0; i<10; i++)
	{
		thread t1(fun, ref(a));
		thread t2(fun, ref(a));
		thread t3(fun, ref(a));
		thread t4(fun, ref(a));
		t1.join();
		t2.join();
		t3.join();
		t4.join();
		cout << a << endl;
		a = 0;
	}
	return 0;
}
