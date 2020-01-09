// Functor with thread.
#include <iostream>
#include <thread>

using namespace std;

class A
{
public:
	void operator() ()
	{
		cout << "Class A's Operator " << endl;
	}
};

//void printAndChange(string s)
void printAndChange(string &s)
{
	cout << s << endl;
	s = "hello";
}
// for move()
void printAndChange1(string &&s)
{
	cout << s << endl;
	s = "hello";
}
int main()
{
	A fnctor;
	thread t1(fnctor);
	// OR
	// thread t1((A()));
	t1.join();

	string s = "What";
	// for passing the reference of string instead of & use 'ref()'
	thread t2(printAndChange, ref(s));
	t2.join();
	cout << "String: " << s << endl << endl;

	thread t3(printAndChange1, move(s));
	cout << "Thread 3 id = " << t3.get_id() << endl;
	t3.join();
	cout << "String: " << s << endl;
	return 0;
}
