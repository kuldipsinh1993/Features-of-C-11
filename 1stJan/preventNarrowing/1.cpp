/*
	Narrowing won't allow, implicit conversion of type so if we try to assign float
	value to the int variable it will generate an error.
*/

#include <iostream>
using namespace std;

void f(int);
void f(int a)
{
	cout << a << endl;
}
int main()
{
	int x{1.2};
	
	f{2.3};
	char ch{1};
	char ch2{7777777};
	return 0;
}
