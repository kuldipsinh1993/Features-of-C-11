#include <iostream>
using namespace std;

class A
{
public:
	explicit A(int i)
	{
		cout << "I is " << i << endl;
	}
};

int main()
{
	A a(10.231);
	A b = 10.21;
	//A a{10.21};
	//a.print(10);
	return 0;
}
