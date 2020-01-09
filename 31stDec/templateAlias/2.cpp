#include <iostream>
#include <typeinfo>

using namespace std;

// Declaration
template<int>
struct int_exact_traits {   // idea: int_exact_trait<N>::type is a type with exactly N bits
	typedef int type;
};

// Initialization
template<>
struct int_exact_traits<8> {
	typedef char type;
};
template<>
struct int_exact_traits<16> {
	//typedef char[2] type;
	using type = char[2];
};

// define alias for convenient notation
template<int N> using int_exact = typename int_exact_traits<N>::type;


int main()
{
	int_exact<8> b =
	      7; // int_exact<8> is an int with 8 bits
	cout << "type of b: " << typeid (b).name() <<
	     endl;
	cout << "size fo b: " << sizeof (b) << " Byte" <<
	     endl;

	return 0;
}
