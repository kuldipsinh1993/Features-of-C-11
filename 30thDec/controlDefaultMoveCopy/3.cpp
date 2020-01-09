#include <iostream>

using namespace std;

class A
{
	int a = 10;
public:
	/*
		move constructor = not allowed
		move assignment = not allowed
		copy constructor = not allowed
		copy assignment = not allowed
	*/
	//A& operator=(A&&) = delete;
	void get()
	{
		cout << "a = " << a << endl;
	}
	void set(int val)
	{
		a = val;
	}
	//A& operator=(A &) = default;
};
int main()
{
	A a;
	a.get();
	A b;
	//b = move(a);
	b = a;
	b.get();
	b.set(11);
	cout << "After Value of a in object B set: " << endl;
	a.get();
	b.get();
	return 0;
}
