/*****
	Date:	26th Dec 2019
	Author: Jam Kuldipsinh

	Description:	Range-for statement.
	Syntax:
		for( range_declaration : range_expression )
*****/

#include <iostream>
#include <typeinfo>
#include <string>
#include <map>
using namespace std;

int main()
{
	// Iterate over array
	int a[] = {1,2,3,4,5,6,7};
	for( auto i : a)
		cout << i << " ";
	cout << endl;	

	// Iterate over initializer list
	for( auto i : {1,2,3,4,4,5,6})
		cout << i << " ";
	cout << endl;
	
	// Iterate over string
	string s = "Welcome to C++11...";
	for( auto i : s)
		cout << i;
	cout << endl;

	// Iterate over map
	map <int,string> Map({{1,"One"}, {2, "Two"} });
	for(auto i : Map)
		cout << '{' << i.first << ", " << i.second << '}' << endl;
	return 0;
}
