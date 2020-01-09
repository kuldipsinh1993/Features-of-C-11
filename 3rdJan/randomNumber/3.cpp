#include <iostream>
#include <random>
#include <memory>
#include <vector>
std::default_random_engine re;   // the default engine
std::normal_distribution<double> nd(31 /* mean */, 8 /* sigma */);
auto norm = std::bind(nd, re);
std::vector<int> mn(64);
int main()
{
	for (int i = 0; i<1200; ++i) ++mn[round(norm())]; // generate
	for (int i = 0; i<mn.size(); ++i) {
		std::cout << i << '\t';
		for (int j=0; j<mn[i]; ++j) std::cout << '*';
		std::cout << '\n';
	}
}
