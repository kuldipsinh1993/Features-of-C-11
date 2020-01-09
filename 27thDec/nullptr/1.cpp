/*****
	Date:	27th Dec 2019
	Author: Jam Kuldipsinh

	Description:	nullptr
	
*****/

#include <iostream>
#include <functional>
#include <typeinfo>
using namespace std;
using namespace std::placeholders;

void print(int i)
{
	cout << i << endl;
}
void print(char*c)
{
	cout << *c << endl;
}
int main()
{
	// It shows print is ambiguous since
	// NULL = (void*)0 that can be converted to int.
	print(NULL);
	return 0;
}
