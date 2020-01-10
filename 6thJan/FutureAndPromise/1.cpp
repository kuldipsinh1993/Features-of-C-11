// Promise and Future
/*
	We can promise the value to be passed and corresponding future can read that value.
*/

#include <iostream>
#include <thread>
#include <future>

using namespace std;

void add(std::promise<int> *p, int a, int b)
{
	p->set_value(a+b);
}
int main()
{
	std::promise<int> p;
	std::future<int> f = p.get_future();
	
	thread th(add, &p, 10, 12);
	cout << "10+12 = " << f.get() << endl;
	
	th.join();
	return 0;
}
