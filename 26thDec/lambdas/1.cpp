/*****
	Date:	27th Dec 2019
	Author: Jam Kuldipsinh

	Description: Lambda Function - Used for small functions which are
		used rarely and which are small.
*****/

#include <iostream>
#include <typeinfo>
#include <vector>
using namespace std;

int main()
{
	vector<int> v{1,2,3,4};
	for(v.begin(), v.end(), [](int i){ cout << i << " "; }
	cout << endl;
	    
	// function to count numbers greater than or equal to 5 
    	int count_5 = count_if(v.begin(), v.end(), [](int a) 
    			{ 
    	    			return (a >= 5); 
    			}); 
	return 0;
}
