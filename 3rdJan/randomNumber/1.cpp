#include <iostream>
#include <random>
#include <memory>
using namespace std;

int main()
{
	uniform_int_distribution<int> oneTosix {1,7};
	default_random_engine re{};

	int x = oneTosix(re);

	auto dice {bind(oneTosix,re)};
	for(int i=0; i<6; i++)
		cout << dice() << endl;
	return 0;
}
