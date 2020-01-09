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

class MathOp
{
	int m_val1, m_val2;
public:
	MathOp():
		m_val1{0}, m_val2{0}
	{}
	MathOp(int a, int b):
		m_val1{a}, m_val2{b}
	{}
	
	void printInfo()
	{
		cout << "val1 : " << m_val1 << endl << "val2 : " << m_val2 << endl;
	}
	
	int add(int a=0, int b=0) 
	{
		if(a || b)
			return a+b;
		else
			return m_val1 + m_val2;
	}
};

void print(int a)
{
	cout << "Welcome to C++11." << endl << "Val : " << a << endl;
}

int main()
{
	// Store Function object
	function<void(int)> f_print = print;
	f_print(1);

	// Store Lambda Function object
	function<void()> f_print10 = []() {print(10);};
	f_print10();

	// Store object of function which is already bound to some value
	function<void()> f_print100 = bind(print, 100);
	f_print100();

	// Class function objects
	
	function<void(MathOp)> f_printInfo = &MathOp::printInfo;
	const MathOp op;
	f_printInfo(op);

	function<int(int,int)> f_add = bind( &MathOp::add, op, _1,_2);
	cout << "1 + 2 = " << f_add(1,2) << endl;
	//f_printInfo(op);
	
	cout << "Type of std::function : " <<typeid(f_print).name() << endl;

	auto ab = print;
	cout << "Type of Lambda function by auto: " <<typeid(ab).name() << endl;
	return 0;
}
