#include <iostream>
#include <thread>
#include <vector>

using namespace std;

struct F
{
	vector<double> &v;
	double* res;
	F(vector<double>& vv, double* p):v{vv}, res{p} {}
	void operator() ()
	{
		*res = 111.234;
	} 
};

void f(vector<double>&, double* res)
{
	*res = 12.123;
}
int main()
{
	double res1;
	double res2;

	vector<double> vec {1.1,1.2};
	thread t1{bind(f, vec, &res1)};
	thread t2{F(vec, &res2)};

	t1.join();
	t2.join();

	cout << res1 << " " << res2 << endl;
	return 0;
}
