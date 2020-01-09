#include <iostream>
#include <random>
#include <memory>

using namespace std;

int rand_int(int low, int high)
{
	static default_random_engine re{};
	using Dist = uniform_int_distribution<int>;
	static Dist uid{};
	return uid(re, Dist::param_type{low,high});
}
int main()
{
	for(int i=0; i< 10 ; i++)
		cout << rand_int(i,10) << endl;
	return 0;
}
