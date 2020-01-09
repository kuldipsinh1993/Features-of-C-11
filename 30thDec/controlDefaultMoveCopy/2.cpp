#include <iostream>

using namespace std;

class A
{
	int a = 10;
public:
	/*
		move constructor = allowed  
		move assignment = allowed
		copy constructor = allowed 
		copy assignment = allowed
	*/
	A& operator=(const A&) = default;
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
	return 0;
}
