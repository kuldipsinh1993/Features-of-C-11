/*
	Variadic template function for addition.
*/
#include <iostream>
using namespace std;

template <class T>
double sum(T t)
{
	return t;
}

template <class T, class... Rest>
double sum(T t, Rest... rest)
{
	return t + sum(rest...);
}

int main()
{
	cout << "Sum(1,2,3.5): " << sum(1,2,3.5) << endl;	
	return 0;
}
