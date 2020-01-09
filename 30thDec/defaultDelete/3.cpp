#include <iostream>
using namespace std;

class A
{
public:
	void print ()=delete;
};
int main()
{
	A a;
	a.print();
	return 0;
}
