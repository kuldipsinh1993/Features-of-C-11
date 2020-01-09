/*
	Date:	26th Dec 2019
	Author: Jam Kuldipsinh

	Description:
		If we return reference and try to assign to auto variable then it will
	take it as value rather than creating reference variable.
*/
#include <iostream>
#include <typeinfo>

using namespace std;

int& sum(int &sum, int a, int b)
{
	sum = a+b;
	return sum;
}

int main()
{
	int ans=0;
	// Still reference is return it will generate integer variable
	auto a = sum(ans, 4, 5);
	
	// Here it will generate integer reference
	auto& b = sum(ans, 4, 5);
	
	cout << "Before value changed" << endl << "ans : " << ans << endl;
	ans = 10;
	cout << "Interger variable: a - type:" << typeid(a).name() << " val : " << a << endl;
	cout << "Reference to Int : b - type:" << typeid(b).name() << " val : " << b << endl;
	return 0;
}
