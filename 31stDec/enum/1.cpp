/***
	Forward declaration is possible
	Enumeration class doesn't allow implicit conversion to int
***/

#include <iostream>
using namespace std;

enum Days { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
enum class Color : char; // Forward declaration
void printColor(Color *p)
{
	cout << int(*p) << endl;
}

enum class Color : char { red, yellow, green, blue }; // defination

int main()
{
	Color c = Color::blue;
	printColor(&c);

	int d = Days::Wednesday;
	cout << "Day = " << d << endl;
	return 0;
}
