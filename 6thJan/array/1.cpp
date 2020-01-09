#include <iostream>
#include <array>

using namespace std;

int main()
{
	// Intialize array with Initializer list
	array<int, 6> a = {1,2,3};

	// error: it can't implicitly convert to a pointer
	//int *p1 = a; 

	// This is ok.
	int *p2 = a.data();
	return 0;
}
