#include <iostream>

using namespace std;

class A
{
	int a = 10;
public:
	/*
		copy constructor = allowed
		copy assignment = not allowed 
		move constructor = allowed
		move assignment = not allowed 
	*/
	A& operator=(const A&) = delete;
	void get()
	{
		cout << "a = " << a << endl;
	}
	void set(int val)
	{
		a = val;
	}
};
int main()
{
	A a;
	a.get();
	//A b(move(a));
	A b;
	b = move(a);
	//b = a;
	b.get();
	b.set(11);
	cout << "After Value of a in object B set: " << endl;
	a.get();
	b.get();
	//b = move(a);
	//b = a;
	return 0;
}
