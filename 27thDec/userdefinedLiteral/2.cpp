#include <iostream>

using namespace std;

// used as conversion
constexpr long double operator"" _deg (long double deg )
{
	return deg * 3.14159265358979323846264L / 180;
}

// used with custom type
struct mytype {
	unsigned long long m;
};
constexpr mytype operator"" _mytype (unsigned long long n )
{
	return mytype{n};
}

// used for side-effects
void operator"" _print (const char* str )
{
	std::cout << str << endl;
}

int main()
{
	double x = 90.0_deg;
	std::cout << std::fixed << x << '\n';
	mytype y = 123_mytype;
	std::cout << y.m << '\n';
	0x123ABC_print;
}
