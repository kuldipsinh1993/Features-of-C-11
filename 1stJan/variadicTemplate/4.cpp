/*
	Variadic template function to print the list of arguments passed
	to the function.
*/

#include <iostream>
#include <vector>
using namespace std;

void tprintf(const char* format) // base function
{
	//std::cout << "called" << std::endl;
    std::cout << format;
}
 
template<typename T, typename... Targs>
void tprintf(const char* format, T value, Targs... Fargs) // recursive variadic function
{
	//int i=0;
    for ( ; *format != '\0'; format++ ) {
        if ( *format == '%' ) {
           std::cout << value;
           tprintf(format+1, Fargs...); // recursive call
           return;
        }
	//std::cout << i++ << std::endl;
        std::cout << *format;
    }
}

int main()
{
    tprintf("% world% %\n","Hello",'!',123);
    return 0;
}
