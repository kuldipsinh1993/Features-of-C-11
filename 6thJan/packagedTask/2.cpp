// Issues with future and promise

#include <iostream>
#include <future>
#include <thread>

using namespace std;

void print(promise<int> *pPtr)
{
	//pPtr->set_value(10);
}
int main()
{
	promise <int> p;
	future <int> f = p.get_future();
	
	thread th(print, &p);
	th.join();
	
	cout << f.get() << endl;
}
