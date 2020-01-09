#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
	cout << "System Clock: " << endl;
	cout << system_clock::period::num << endl;
	cout << system_clock::period::den << endl;
	cout << "steady = " << boolalpha << system_clock::is_steady << endl << endl;

	
	cout << "high resolution Clock: " << endl;
	cout << high_resolution_clock::period::num << endl;
	cout << high_resolution_clock::period::den << endl;
	cout << "steady = " << boolalpha << high_resolution_clock::is_steady << endl << endl;
	
	cout << "steady Clock: " << endl;
	cout << steady_clock::period::num << endl;
	cout << steady_clock::period::den << endl;
	cout << "steady = " << boolalpha << steady_clock::is_steady << endl << endl;
	return 0;
}
