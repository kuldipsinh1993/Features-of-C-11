#include <iostream>
#include <memory>
using namespace std;

//void declare_reachable( void* p ) throw(std::bad_alloc);

int main()
{
	//int *p = new int;
	void *p;
	declare_reachable(p);
	//void declare_reachable(int p); 
	/*
	p += 10;
	p -= 10;
	*p = 10;
	cout << "*p is " << *p << endl;
	*/
	
	return 0;
}
