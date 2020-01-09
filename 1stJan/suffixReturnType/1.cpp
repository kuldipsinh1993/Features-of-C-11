/**
	Different ways to write return type of function.
**/
#include <iostream>
using namespace std;

template < class T, class U >

//	1st way
auto mul( T x, U y ) -> decltype(x*y)

//	2nd way not pretty
//decltype(*(T*)(0)**(U*)(0)) mul( T x, U y )
{
	return x*y;
}

int main()
{
	cout << "3*4 : " << mul(3,4) << endl;
	return 0; 
}
