// recursive_mutex : Used when function is calling it self recursively

#include <iostream>
#include <mutex>
#include <thread>
#include <unistd.h>

using namespace std;

recursive_mutex m;

int sh=0;
int fun(int i)
{
	if(i==1)
		return 1;
	else
	{
		m.lock();
		i--;
		sh += fun(i);
		m.unlock();
	}
}
int main()
{
	thread t1(fun,5);
	//thread t2(fun,4);
	t1.join();
	//t2.join();
	cout << "Program over : sh = " << sh << endl;
	return 0;
}
