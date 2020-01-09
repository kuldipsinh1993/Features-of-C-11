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
	
	auto z = [](double i, double j){
		return i+j;
	};
	
	cout << x << " + " << y << " = " << z(x,y) << endl;
	

	auto sub = [=](){
		return x-y;
	};
	
	cout << x << " - " << y << " = " << sub() << endl;
	return 0;
}
