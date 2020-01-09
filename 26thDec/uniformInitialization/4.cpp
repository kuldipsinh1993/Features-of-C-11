/*****
	Date:	26th Dec 2019
	Author: Jam Kuldipsinh

	Description:	Initialization of an array data member of class
*****/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class A
{
	vector <int> a;
	
	string b;
public:
	A(vector<int>a, string b): 
		a{a}, b{b} // Initializer list
	{
	}
	void printInfo()
	{
		for (auto i: a)
			cout << i << " ";
		cout << endl;
		cout << b << endl;	
	}
};


int main()
{	
	vector<int> arr = {1,2,3,4};		
	
	A a(arr,"Hello");
	a.printInfo();
	return 0;
}
