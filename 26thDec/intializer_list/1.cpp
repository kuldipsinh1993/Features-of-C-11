/*****
	Date:	26th Dec 2019
	Author: Jam Kuldipsinh

	Description:	Initializer list is used to initialize member of class.
*****/

#include <iostream>
#include <string>
using namespace std;

class A
{
	int a;
	string b;
public:
	A(int a, string b): 
		a{a}, b{b} // Initializer list
	{
	}
	void printInfo()
	{
		cout << a << " " << b << endl;	
	}
};
int main()
{
	A a(1,"Hi");
	a.printInfo();
	return 0;
}
