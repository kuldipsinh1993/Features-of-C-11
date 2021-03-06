/*****
	Date:	26th Dec 2019
	Author: Jam Kuldipsinh

	Description:	Use of auto.
	Function:
		typeid(type)		- C++11
		typeid(expression)	- C++17
*****/

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	auto x = 4;
	auto y = 3.37;
	auto ptr = &x;
	// typeid(type)
	cout << typeid(x).name() << endl
		<< typeid(y).name() << endl
		<< typeid(ptr).name() << endl;

	// typeid(expression)
	//cout << typeid(x>16) << endl;
	
	return 0;
}
