/****
	Demostrate how to prevent exception propogation.
****/

#include <iostream>

using namespace std;

void a()
{
	cout << "a is called ..." << endl;
	throw 1;
}

void b()
{
	cout << "b is called ..." << endl;
	a();
	cout << "hi" << endl;
}
void c()
{
	cout << "c is called ..." << endl;
	b();
}
//void d() noexcept
void d() 
{
	cout << "d is called ..." << endl;
	c();
}

int main()
{
	try
	{	
		d();
	}
	catch(int i)
	{
		cout << "Catched successfully..." << endl;
	}
	return 0;
}
