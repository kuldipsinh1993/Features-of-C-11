/*****
	Date:	26th Dec 2019
	Author: Jam Kuldipsinh

	Description: Implicitly initialize function parameter
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

void fun(A a)
{
	a.printInfo();
}
int main()
{
	fun({1,"Hello"});
	return 0;
}
