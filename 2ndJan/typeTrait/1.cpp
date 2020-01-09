// Trait : It gives us additional information other than just the type.

#include <iostream>
#include <type_traits>
#include <limits>
using namespace std;

struct A
{};
class B
{};
int main()
{
	cout << "is_void<int> : " << is_void<int>::value << endl;
	cout << "is_void<void> : " << is_void<void>::value << endl;
	
	cout << "is_array<a> : " << is_array<int []>::value << endl;
	
	cout << "is_class<A> : " << is_class<A>::value << endl;
	cout << "is_class<B> : " << is_class<B>::value << endl;

	cout << "max values\n";
	cout << "int: " << numeric_limits<int>::max() << endl;
	cout << "double: " << numeric_limits<double>::max() << endl;
	cout << "float: " << numeric_limits<float>::max() << endl;
	cout << "unsigned int: " << numeric_limits<unsigned int>::max() << endl;
	return 0;
}
