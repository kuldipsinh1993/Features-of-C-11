/**
	Attributes are for performance optimization and user simplicity.

	for ex> If [[ noreturn ]] is there means it won't return anything. 
**/

#include <iostream>
using namespace std;

void f [ [ noreturn ] ] ()  // f() will never return
{
	//return 1;
	throw "error";  // OK
}
struct foo* f [ [ carries_dependency ] ] (int i);   // hint to optimizer
    
int main()
{
	int* g(int* x, int* y [ [ carries_dependency ] ] );
	return 0;
}
