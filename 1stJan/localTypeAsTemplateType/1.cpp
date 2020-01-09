/**
	In c++11 we can pass local types to the template.
**/

#include <iostream>
using namespace std;

template<typename T> void foo(T const& t){ cout << t <<endl;}
enum X { x,a };
enum { y };

int main()
{
	foo(a);     // C++98: ok; C++11: ok
	foo(y);     // C++98: error; C++11: ok
	enum Z { z };
	foo(z);     // C++98: error; C++11: ok 
	return 0;
}
