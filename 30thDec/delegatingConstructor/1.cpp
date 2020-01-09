#include <iostream>

using namespace std;


class A{
	int id;
public:
	A(int val):
		id{val}
	{
	}
	
	// Delegating constructor
	A():
		A{1}
	{}
	
	int getId()
	{
		return id;
	}
};
int main()
{
	A a;
	cout << "Id : " << a.getId() << endl;
	A b(12);
	cout << "Id : " << b.getId() << endl;
	return 0;
}
