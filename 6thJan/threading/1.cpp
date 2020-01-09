#include <iostream>
#include <thread>

using namespace std;

void print()
{
	cout << "Hello" << endl;
}

void add(int a, int b)
{
	cout << a << " + " << b  << " = " << a+b << endl;
}
int main()
{
	thread t1{print};
	thread t2{add, 1, 2};
	t1.join();
	t2.join();
	return 0;
}
