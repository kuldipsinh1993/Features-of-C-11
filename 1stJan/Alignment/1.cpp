/*
	alignas will align the memory allocation.

	ex. SSE need to be aligned to 16 bytes, while AVX to 32 bytes.

	Something with an alignment of 16 then will be placed on the next available address
	that is a multiple of 16.
*/
#include <iostream>
using namespace std;

int main()
{
	//int a[4];
	alignas(16) int a[4];
	cout << &a[0] << endl;
	cout << &a[1] << endl;
	cout << &a[2] << endl;
	
	return 0;
}
