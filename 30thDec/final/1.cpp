/***
	Final : It is used to finilize any method which can not be overrided in any of the
child classes.
***/

#include <iostream>
using namespace std;

class A 
{
public:
	virtual void print() final
	{
		cout << "Class A : HI there..." << endl;
	}
};

class B : A
{
public:
	void print() override
	{
		cout << "Class B : Hi" << endl;
	}
};
int main()
{
	B b;
	b.print();
	return 0;
}
