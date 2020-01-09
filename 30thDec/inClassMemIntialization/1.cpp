#include <iostream>
using namespace std;

class A
{
	int a = 1;
public:
	auto print() -> int
	{
		return a;
	}

};
int main()
{
	A a;
	cout << "a : " << a.print() << endl;
	return 0;
}
