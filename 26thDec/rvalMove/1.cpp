/*****
	Date:	26th Dec 2019
	Author: Jam Kuldipsinh

	Description:	Rvalue references and move semantics.
*****/

#include <iostream>
#include <typeinfo>
using namespace std;

void printlval (int& value)
{
	cout << "lval : " << value << endl;
}
void printrval (int&& value)
{
	cout << "rval : " << value << endl;
}

int getValue()
{
	int temp = 100;
	return temp;
}
int main()
{
	int i = 10;
	printlval(i);
	printrval(getValue());
	return 0;
}
