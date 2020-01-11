/*****
	Date:	27th Dec 2019
	Author: Jam Kuldipsinh

	Description:	constexpr declares that it is possible to evaluate the value of the
	function or variable at compile time.
	
	Basically constexpr is evaluate expresion at compile time so at run time it will 
	not take more time.

*****/

#include <iostream>
#include <stdexcept>

// C++11 constexpr functions use recursion rather than iteration
// (C++14 constexpr functions may use local variables and loops)
constexpr int factorial (int n)
{
        return n <= 1 ? 1 : (n * factorial (n - 1));
}

template<int n>
struct constN {
        constN() { std::cout << n << '\n'; }
};

int main()
{
        std::cout << "4! = " ;
        constN<factorial (4)>
        out1; // computed at compile time

        volatile int k =
              8; // disallow optimization using volatile
        std::cout << k << "! = " << factorial (
                        k) << '\n'; // computed at run time
        return 0;
}
