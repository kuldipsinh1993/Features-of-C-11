/*
	Allow checking or filteration of some condition at compile time.
*/

#include <iostream>
//#include <assert>
using namespace std;

#define X int
#define Y float
int main()
{
	static_assert(sizeof(long)>=8, "64-bit code generation required for this library.");
	struct S { X m1; Y m2; };
	static_assert(sizeof(S)==sizeof(X)+sizeof(Y),"unexpected padding in S");
	
	const int i=0;
	static_assert(i>0, "a is less than zero");
	return 0;
}
