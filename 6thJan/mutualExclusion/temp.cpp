#include <iostream>
using namespace std;

void get() noexcept
{
	//throw 2;
	cout << "Hello" << endl;
	throw 1;
}

template <class A>
auto add (A i, A j)->A
{
	return i+j;
}

class Add{
	int a,b;
public:
	//Add(int v1, int v2) : a{v1}, b{v2} {}
	Add() = default;
	Add(int i) : a{i} {};
	int getI()
	{
		return a;
	}
	//Add(int, int) = delete;
};
class Sub : public Add{
	using Add::Add;
};
int main()
{
	//cout << noexcept(get()) << endl;
	//get();
	cout << add<float>(12,1.123) << endl;

	Add a;
	//Add b(1,2);

	Sub b(10);
	cout << b.getI() << endl;
	return 0;
}
