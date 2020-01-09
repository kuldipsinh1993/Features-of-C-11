/*****
	Date:	27th Dec 2019
	Author: Jam Kuldipsinh

	Description:	Lambda
			It is used for inline function. Normally if the function is small
	and it is not going to be used again in future then only we need to use lambda
	function. It will increse the performance of the program and reduce the overhead 
	of the compiler.
	
	Function:
		[](argument){
			statement;
		}
*****/

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	auto x = 4;
	auto y = 3.37;
	
	// [&](){} -> allow to read and write all global variable
	// since we are passing the reference
	auto sub = [&](){
		// IF you try to change value then give an error
		// Uncomment below line to see the effect
		y = 2.45;
		return x-y;
	};

	
	cout << x << " - " << y << " = " << sub() << endl;
	return 0;
}
