// We can pass std::array to object to intialize array data member of the class

#include <iostream>
#include <array>

using namespace std;
class A
{
	array<int ,5> a;
	//int a[5];
public:
	A(array<int,5> a):
		a{a}
	{}
	void print()
	{
		for(auto i: a)
			cout << i << " ";
		cout << endl;
	}
};

int main()
{
	array <int,5> a {1,2,3,4,5};
	A obj(a);
	obj.print();
	return 0;
}
