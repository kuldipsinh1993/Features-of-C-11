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
#include <algorithm> // for_each
#include <vector> 
#include <typeinfo> // for type_id().name()
using namespace std;

int main()
{
	vector<int> v{1,2,3,4,5,6};
	cout << "Vector: ";
	for_each(v.begin(), v.end(), [](int i){
		cout << i << " ";
	});
	
	cout << endl;
	return 0;
}
