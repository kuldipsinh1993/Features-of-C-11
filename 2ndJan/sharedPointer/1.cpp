#include <iostream>
#include <memory>
using namespace std;

int main()
{
	int *p = new int(10);
	shared_ptr<int> p1(p);
	{
		cout << "Count of pointer : " << p1.use_count() << endl;
		shared_ptr<int> p2(p1);
		{
			cout << "Count of pointer : " << p2.use_count() << endl;
			shared_ptr<int> p3(p2);
			
			cout << "Count of pointer : " << p3.use_count() << endl;
		}
	}	
	return 0;
}
