/***
	Override is C++11 feature which will allow compiler to check the defination of
function is there in Base class or not, if the no function match with the function having
override keyword then it will generate an error.
***/
#include <iostream>
using namespace std;

class A
{
public:
	A(){};
	virtual void print()
	{
		cout << "Class A : Hello" << endl;
	}
};

class B : public A
{
public:
	B(){};
	void print() 
	{
		cout << "Class B : Hello" << endl;
	}
};

int main()
{
	B b;
	/*
	A *a;
	a = &b;
	a->print();
	*/
	A a;
	a = b;
	a.print();
	b.print();
	return 0;
}
