/*
	Unique Pointer:
		release()
		reset() or reset(new obj)
		swap()
		get() - return address
		get_deleter() - return the deleter
*/

#include <iostream>
#include <memory>
using namespace std;

int main()
{
	int *i = new int;
	*i = 10;
	
	unique_ptr<int> p(i);
	cout << "pointer p : " << p.get() << "	" << *p << endl;
	
	unique_ptr<int> q;
	q = move(p);
	cout << "After moving pointer p to q" << endl;
	cout << "pointer p : " << p.get() << endl;
	cout << "pointer q : " << q.get() << "	" << *q << endl;
	
	cout << endl << "Now we will see swapping of unique pointers: " << endl;

	int *j = new int(12);
	unique_ptr<int> pj(j);
	cout << "pointer pj : " << pj.get() << "	" << *pj << endl;

	pj.swap(q);
	
	cout << "pointer q : " << q.get() << "	" << *q << endl;
	// Releasing q
	q.release();
	cout << "After relesing q : " << q.get() << endl;
	//pj.reset(nullptr);
	cout << "pointer pj : " << pj.get() << "	" << *pj << endl;
	pj.reset();
	cout << "pointer pj after reset() : " << pj.get() << endl;
	return 0;
}
