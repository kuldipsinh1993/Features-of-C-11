/*****
	Date:	26th Dec 2019
	Author: Jam Kuldipsinh

	Description:	Initialization of an array data member of class

	array memory is allocated to stack and class object memory is in heap so we can't
	pass static array to class object.
*****/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class A
{
	int a1[4];
	
	string b;
public:
	A(int *a, string b): 
		 b{b} // Initializer list
	{
		for(int i=0; i<4; i++,a++)
			a1[i] = *a;
	}
	void printInfo()
	{
		for (auto i: a1)
			cout << i << " ";
		cout << endl;
		cout << b << endl;	
	}
};

void print(int a[])
{
	for(int i=0; i<4; i++)
		cout << a[i] << " ";
	cout << endl;
}
int main()
{	
	int a1[4] = {1,2,3,4};
	//for(auto i: a1)
	//	cout << i << " ";
	//cout << endl;
	A a(&a1[0],"Hello");
	a.printInfo();
	print(a1);
	return 0;
}
