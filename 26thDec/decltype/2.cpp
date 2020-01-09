#include <iostream>
#include <typeinfo>
using namespace std;

template <typename A, typename B>
auto findMin(A a, B b) -> decltype(a<b ? a : b)
//auto findMin(A a, B b)	// c++14
{
	return (a < b) ? a : b;
}

/*
//c++14 feature - without trailing return type
//Set type of first argument
auto max1(auto a, auto b)
{
	//cout << "Max is called:" << endl;
	cout << "a : " << a << "	b: " << b << endl;
	return (a>b) ? a : b;
}
*/

int main()
{
	cout << findMin(4,5.22) << " - type: " << typeid(findMin(4,5.22)).name() << endl;
	cout << findMin(10,2.223) << " - type: " << typeid(findMin(10,2.22)).name() << endl<< endl;
	
	/*
	cout << "Check type allocation in C++14:" << endl;
	cout << "type : " << typeid(max1(3.1,4.2)).name() << " Max - " << max1(3.1,4.2)<< endl<< endl;
	
	cout << "type : " <<typeid(max1(3,4.2)).name() << " Max - " << max1(3,4.2)<< endl;
	*/
	return 0;
}
