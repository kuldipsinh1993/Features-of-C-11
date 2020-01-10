#include <iostream>
#include <future>
#include <unistd.h>

using namespace std;

int sum( promise<int> *p, int a, int b)
{
	p->set_value(a+b);
	usleep(5000000);
}

void getSum (future<int> *f)
{
	usleep(1000000);
	cout << "Sum is " << f->get() << endl; 	
}

int main()
{
	promise <int> p;
	future <int> f = p.get_future();

	thread t1 (sum, &p, 11,11);
	thread t2 (getSum, &f);
	t1.join();
	t2.join();
	return 0;
}
