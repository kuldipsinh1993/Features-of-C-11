/****
	Date:	30th Dec 2019
	Author:	Jam Kuldipsinh

	Description:
		=default ang =delete
****/

#include <iostream>
using namespace std;

class A
{
public:
	//A() = delete; // It will delete the constructor so class's obj can't be created.
};

class B
{
	int i=10;
public:
	B() = default; // It will copy the default constructor implementation
	void print()
	{
		cout << i << endl;
	}
};

int main()
{
	A a;
	B b;
	b.print();
	return 0;
}
