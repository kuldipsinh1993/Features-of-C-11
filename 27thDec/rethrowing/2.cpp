/*****
	Date:	27th Dec 2019
	Author: Jam Kuldipsinh

	Description:	rethrowing

*****/
#include <iostream>
class Base {
public:
	Base() {}
	virtual void print() { std::cout << "Base"; }
};

class Derived: public Base {
public:
	Derived() {}
	virtual void print() { std::cout << "Derived"; }
};

int main()
{
	try {
		try {
			throw Derived();
		} catch (Base& b) {
			std::cout <<
			          "Caught Base b, which is actually a ";
			b.print();
			std::cout << "\n";
			throw; // the Derived object gets sliced here
		}
	} catch (Base& b) {
		std::cout <<
		          "Caught Base b, which is actually a ";
		b.print();
		std::cout << "\n";
	}

	return 0;
}
