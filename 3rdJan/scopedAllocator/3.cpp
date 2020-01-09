#include <iostream>
#include <memory>
#include <vector>

#include <scoped_allocator>
using namespace std;


template <class T>
class MyCustomAllocator
{
public:
	using value_type = T;
	
	MyCustomAllocator();

	template <class U>
	
	MyCustomAllocator(const MyCustomAllocator<U> &other);

	T* allocate(size_t n);
	void deallocate(T* ptr, size_t n);
};


template <class T, class U>
bool operator==(const MyCustomAllocator<T>&, const MyCustomAllocator<U>&);
template <class T, class U>
bool operator!=(const MyCustomAllocator<T>&, const MyCustomAllocator<U>&);

int main()
{
	// Example of using MyCustomAllocator
	using MyString = std::basic_string<char, std::char_traits<char>, MyCustomAllocator<char>>;

	MyCustomAllocator<char> mca{  };
	MyString myString1{ "some value", mca };

	return 0;
}


/*
template <class T>
//using Allocator = allocator<T>;
//MyCustomAllocator<T> allocator;
using Allocator = allocator;

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
	
	v.push_back("hello");
	v.push_back("world");
	cout << v[0] << endl;
	cout << v[1] << endl;
	return 0;
}
*/
