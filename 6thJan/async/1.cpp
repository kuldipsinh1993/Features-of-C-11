// async
/*
	It is high-level abstracting over promise to perform asynchronous execution of
	task.
*/
#include <iostream>
#include <future>

using namespace std;

int fun(int a, int b)
{
	// Perform some task
	return a+b;
}

int main()
{
	future<int> f = async(fun, 10, 12);
	cout << f.get() << endl;
	return 0;
}
