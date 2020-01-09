#include <iostream>
#include <memory>
#include <typeinfo>
#include <tuple> // for tuple , tie(), tuple_cat(), swap()
using namespace std;

int main()
{
	auto t = make_tuple(string("Hello"), 10, 12.24);
	cout << "First : " << get<0>(t) << endl;
	
	cout << "type of tuple: " << typeid(t).name() << endl << endl;

	// We can initialize tuple with pair but can't do reverse.
	// Pair is also tuple of having two values.

	pair<int,string> p(12,"What");
	auto t1 = p;
	cout << "type of tuple: " << typeid(t1).name() << endl << endl;
	
	
	// Functions
	auto t2 = make_tuple('a', 10 ,12.3);
	cout << "t2 size : " << tuple_size<decltype(t2)>::value << endl;

	
	return 0;
}
