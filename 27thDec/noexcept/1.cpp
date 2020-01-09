/*****
	Date:	27th Dec 2019
	Author: Jam Kuldipsinh

	Description:	noexcept
	
*****/

#include <iostream>
#include <typeinfo>
using namespace std;

void show()
{
	throw 1;
}

void print() noexcept
//void print()
{
	cout << "Hello" << endl;
	//throw 1;

	show();
}
int main()
{
	try
	{
		std::cout << std::boolalpha;
		cout << "RetValue : " << noexcept(print()) << endl;
		print();
	}
	catch(int x)
	{
		cout << "throw is catched..." << endl;
	}
	return 0;
}
