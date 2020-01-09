/***
	Simple Allocator
***/

#include <iostream>
#include <memory>

using namespace std;

int main()
{
	// allocator for integer
	allocator<int> myAllocator;
	
	// allocate memory for 5 integers
	int *arr = myAllocator.allocate(5);

	// construct arr[0] and arr[3]
	myAllocator.construct(arr, 100);
	arr[3] = 10;

	cout << "arr[0] : " << arr[0] << endl;
	cout << "arr[1] : " << arr[1] << endl;
	cout << "arr[3] : " << arr[3] << endl;

	// deallocate memory
	myAllocator.deallocate(arr, 5);

	return 0;
}
