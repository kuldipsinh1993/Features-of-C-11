// Initialize thread with class member function

#include <iostream>
#include <thread>
using namespace std;

class A{
public:
	void print()
	{
		cout << "Hello World..." << endl;
	}
};
int main()
{
	thread t(&A::print, A());
	if(t.joinable())
		t.join();
	return 0;
}
