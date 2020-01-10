// Promise and Future
/*
	Passing multiple promise
*/

#include <iostream>
#include <thread>
#include <future>

using namespace std;

void add(std::promise<int> *p, promise<double> *pD, double a, double b)
{
	p->set_value(a+b);
	pD->set_value(a/b);
}
int main()
{
	std::promise<int> p;
	std::promise<double> pD;
	std::future<int> f = p.get_future();
	std::future<double> fD = pD.get_future();
	
	thread th(add, &p, &pD, 10, 12);
	cout << "10+12 = " << f.get() << endl;
	cout << "10/12 = " << fD.get() << endl;
	
	th.join();
	return 0;
}
