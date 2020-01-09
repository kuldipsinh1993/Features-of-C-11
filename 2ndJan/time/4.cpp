#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
	milliseconds mil(1000);
	mil *= 60;

	cout << "duration (in periods): " << mil.count() << " milliseconds."<< endl;

	cout << "duration (in seconds): ";
	cout << (mil.count() * milliseconds::period::num /
				milliseconds::period::den);
	cout << " seconds." << endl;
	return 0;
}
