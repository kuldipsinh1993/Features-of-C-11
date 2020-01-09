//Move Semantics

#include <iostream>
#include <string>
using namespace std;

class A
{
	int mId;
	string mName;
public:
	A ():
		mId{0}, mName{""}
	{}
	A (int id, string name):
		mId{id}, mName{name}
	{}

	// Move Constructor
	A (A&& other)
		//mId{other.mId}, mName{other.mName}
	{
		cout << "Move Constructor is called " << endl;
		mId = other.mId;
		mName = other.mName;
	}
	// Move Assignment
	A& operator = (A&& other)
	{
		cout << "Move assignment operator is called " << endl;
		mId = other.mId;
		mName = other.mName;
		other.mId = 0;
		other.mName = "";
		return *this;
	}
};

int main()
{
	A a(1, "Kuldipsinh");
	// It will call move constructor
	A b(move(a));

	A c(2, "hello");
	// It will call move assignment operator
	c = move(a);

	A d;
	d = move(a);
	return 0;
}
