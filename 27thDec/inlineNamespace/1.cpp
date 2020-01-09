/*****
	Date:	27th Dec 2019
	Author: Jam Kuldipsinh

	Description:	Functional

	Syntax:
		std::function<function type> fname = FunctionName;
*****/

#include <iostream>
#include <functional>
#include <typeinfo>
using namespace std;
using namespace std::placeholders;

namespace {
int i;  // defines ::(unique)::i
}

void f()
{
	i++;  // increments ::(unique)::i
}

namespace A {
	namespace {
		int i; // A::(unique)::i
		int j; // A::(unique)::j
	}

	void g() { i++; } // A::unique::i++
}

using namespace A;

void h()
{
	i++;    // error: ::(unique)::i and ::A::(unique)::i are both in scope
	A::i++; // ok, increments ::A::(unique)::i
	A::j++;    // ok, increments ::A::(unique)::j
}

int main()
{
	
	 // introduces all names from A into global namespace
//	h();
	return 0;
}
