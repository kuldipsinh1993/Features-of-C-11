// Packaged Function
#include <iostream>
#include <future>
#include <thread>

using namespace std;

string print()
{
	return "This is Packaged Task...";
}

int add(int a, int b)
{
	return a+b;
}
int main()
{
	packaged_task<string()> p(print);
	future<string> f = p.get_future();

	thread th(move(p));
	cout << f.get() << endl;
	th.join();

	packaged_task<int(int,int)> p1(add);
	future<int> f1 = p1.get_future();

	thread th1(move(p1), 11, 22);
	cout << "11+22 = " << f1.get() << endl;
	th1.join();
	return 0;
}
