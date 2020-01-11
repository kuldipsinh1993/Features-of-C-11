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
	vector<int> v{1,21,32,4};
        for_each(v.begin(), v.end(), [](int i)
        {
                cout << i << " ";
        });

        cout << endl;

        // function to count numbers greater than or equal to 5 
        int count_5 = count_if(v.begin(), v.end(), [](int a)
                        {
                                return (a >= 5);
                        });

        cout << "Count_5 : " << count_5 << endl;
	return 0;
}
