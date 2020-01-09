/*****
	Date:	26th Dec 2019
	Author: Jam Kuldipsinh

	Description:	Uniform initialization syntax.
			{value1, value2, ....}
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
int main()
{
	A a(1,"Hi");
	a.printInfo();
	
	vector <int> v = {1,2,3,4,5};
	for(auto i : v)
		cout << i << " ";
	cout << endl;

	A a1{1.243,"Hi"};
	a1.printInfo();
	return 0;
}
