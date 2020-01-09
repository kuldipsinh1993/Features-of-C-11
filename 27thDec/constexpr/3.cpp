#include<iostream>
using namespace std;

constexpr long int fib (int n)
{
	return (n <= 1) ? n : fib (n - 1) + fib (n - 2);
}

int main ()
{
	// value of res is computed at compile time.

	// If we remove const from below line it take 0.01 sec to execute
	// else it takes 0.001sec
	const long int res = fib (30);
	cout << res;
	return 0;
}
