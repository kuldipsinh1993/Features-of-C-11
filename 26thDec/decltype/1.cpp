/*****
	Date:	26th Dec 2019
	Author: Jam Kuldipsinh

	Description:	Use of decltype.
		Used to assign type which is evaluated from another variable or function
	etc.
*****/

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	int a = 10;
	decltype(a) b = 1;
	cout << "type of a : " << typeid(a).name() << endl;
	cout << "type of b : " << typeid(b).name() << endl;
	return 0;
}
