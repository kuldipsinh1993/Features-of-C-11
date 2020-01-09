// Standard allocator and scoped_allocator_adaptor

#include <iostream>
#include <memory>
#include <vector>

#include <scoped_allocator>
using namespace std;

template <class T>
using Allocator = allocator<T>;

using String = basic_string<char, char_traits<char>, Allocator<char>>;

using Vector = vector<String, Allocator<String>>;
//using Vector = vector<String, scoped_allocator_adaptor<Allocator<String>>>;

int main()
{
	Allocator<String> as;
	Allocator<char> ac (as);
	Vector  v(as);

	//v.push_back( String("hello", ac) );
	
	//v.push_back( String("oops, not using same memory resource") );
	
	v.push_back("hello"); // With scoped_allocator_adaptor, no need to pass allocator
	v.push_back("world");
	cout << v[0] << endl;
	cout << v[1] << endl;
	return 0;
}
