/*****
	Date:	26th Dec 2019
	Author: Jam Kuldipsinh

	Description:	Implicit initialize objects to return
*****/

#include <iostream>
#include <string>
#include <vector>
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

A fun(int a, string b)
{
	// Compiler deduce constructor of A and intialize its member
	return {a, b};
}
int main()
{
	A a = fun(1,"Hello");
	a.printInfo();
	return 0;
}
