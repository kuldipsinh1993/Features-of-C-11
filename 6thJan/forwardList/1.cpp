#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	forward_list<int> l1;

	forward_list<int> l2;

	l1.assign({1,2,3});

	l2.assign({5,6});

	cout << "Elements of L1: " ;
	for (int&a : l1)
		cout << a << " " ;
	cout << endl << "Elements of L2: ";
	for (int&b : l2)
		cout << b << " " ;
	cout << endl;
	

	cout << "After adding element" << endl;
	// Push_front(), emplace_front()
	l1.push_front(12);
	l2.emplace_front(11);
	
	cout << "Elements of L1: " ;
	for (int&a : l1)
		cout << a << " " ;
	cout << endl << "Elements of L2: ";
	for (int&b : l2)
		cout << b << " " ;
	cout << endl;

	cout << "After poping element" << endl;

	// pop_front();
	l1.pop_front();
	
	cout << "Elements of L1: " ;
	for (int&a : l1)
		cout << a << " " ;
	cout << endl;
	 
	return 0;
}
