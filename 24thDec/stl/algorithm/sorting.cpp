/*****
	Date:	24th Dec 2019
	Author:	Jam Kuldipsinh

	Sort: <algorithm>
	Syntax:
		sort(start-iterator, end-iterator)
*****/
#include <iostream>
#include <algorithm>

using namespace std;

void print (int a[])
{
	for (int i = 0; i < 10; ++i)
		cout << a[i] << " ";
}

int main()
{
	int a[10] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
	cout << "\n The array before sorting is : ";
	print (a);

	int size = sizeof (a) / sizeof (a[0]) ;
	
	sort (a, a + size);

	//*****	Reverse Sort *****//
	//sort (a, a + size, greater<int>());

	cout << "\n\n The array after sorting is : ";
	print (a);
	cout << endl;

	return 0;
}
