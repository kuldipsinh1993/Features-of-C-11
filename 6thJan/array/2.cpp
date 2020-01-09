// Don't get derived to base conversions.

#include <iostream>
#include <array>

using namespace std;

class Fruit
{};

class Apple
{};

void nasty(array<Fruit*,10>& f)
{
		
}
int main()
{
	array<Apple*, 10> apples;

	// Error: can't convert arry<Apple*, 10> to array<Fruit*, 10>
	nasty(apples); 	
	return 0;
}
