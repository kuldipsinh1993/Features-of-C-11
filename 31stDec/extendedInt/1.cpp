/***
	Extended Integer is used to provide perticular size to the variable independent of
	the operating system.
***/

#include <iostream>
using namespace std;

int main()
{
	int32_t i=42;
	int8_t a=13;
	cout << "Size of i : " << sizeof(i) << " Bytes"<< endl;
	cout << "Size of a : " << sizeof (a) << " Bytes"<< endl;
	return 0;
}
