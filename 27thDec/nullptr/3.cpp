#include <iostream>
using namespace std;

int main()
{
	int *p = nullptr;
	int b = 10;
	p = &b;
	cout << *p << endl;
	return 0;
}
