/***
	Date:	24th Dec 2019
	Author: Jam Kuldipsinh


	Binary Search: <algorithm>
	Syntax:
		binary_search(startAdd, endAdd, valuetobefound)
***/
#include <algorithm>
#include <iostream>

using namespace std;

void print (int a[], int arraysize)
{
	for (int i = 0; i < arraysize; ++i)
		cout << a[i] << " ";
}

int main()
{
	int a[] = { 11, 52, 18, 93, 6, 7, 3, 4, 2, 0 };
	int asize = sizeof (a) / sizeof (a[0]);
	cout << "\n The array is : ";
	print (a, asize);

	cout << "\n\nLet's say we want to search for 2 in the array";
	cout << "\n So, we first sort the array";
	sort (a, a + asize);
	cout << "\n\n The array after sorting is : ";
	print (a, asize);
	cout << "\n\nNow, we do the binary search for 2:";

	if (binary_search (a, a + 10, 2))
		cout << "\nElement found in the array";
	else
		cout << "\nElement not found in the array";

	cout << "\n\nNow, say we want to search for 10";

	if (binary_search (a, a + 10, 10))
		cout << "\nElement found in the array";
	else
		cout << "\nElement not found in the array";

	cout << endl;
	return 0;
}


