#include <iostream>
#include <functional> // for bind and function
using namespace std;
using namespace std::placeholders;

int fun(int a, char b , double c)
{
	return a;
}

void print()
{

}
int print(int a)
{
	return 11;
}

int main()
{
	auto a = bind(fun,_3,_2,_1);
	int aI = a(1, 'a', 1.3);

	auto b = bind(fun,_1, 'a' , 12.1232); // fun( , 'a', 12.12)
	aI = b(11);

	//auto c = bind(print);	//gives error since
	auto c = [] (int a) {print(a);};

	return 0;
}
