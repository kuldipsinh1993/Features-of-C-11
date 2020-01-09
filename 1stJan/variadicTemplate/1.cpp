/**
	variadicTemplate is used to create template that has unknown number of arguments.
**/

#include <iostream>
using namespace std;

void print(float i)
{
	cout << i << endl;
}

template<class... Types>
void f(Types&&... args)
{
	auto a ={((void)print(args),0)...};
	
	// Working
	//using expander = int[];
	//(void) expander{0, ((void)print(args), 0)...};
}

int main()
{
	//f();
	f(1);
	f(2,1.9);	
	return 0;
}
