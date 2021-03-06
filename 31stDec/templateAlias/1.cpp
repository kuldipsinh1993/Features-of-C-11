#include <iostream>
#include <vector>
#include <list>
using namespace std;

// Vector
template <typename T>
using v = vector<T>;

// Function Pointer
template <typename T>
using func = T (*) (T);

int main()
{
	cout << "Vector: ";
	v<int> fib = {1, 2, 3, 4, 5};
	v<int> vec = fib;

	for (auto it : vec)
		cout << it << " ";

	cout << endl;


	/*
	      //[b]//MyList<T> is a synonym for std::list<T>[/b]
	      template <typename T>
	      using MyList = std::list<T>;
	      MyList<int> intlst; //Client code
	*/


	cout << "Function Pointer: ";
	//	Function Pointer
	func<int> fptr = [] (int i) {return i * i;}; //Client code

	cout << fptr (2) << endl;


	return 0;
}
