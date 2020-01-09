/*
	system_clock - this is the real-time clock used by the system;
	
	high_resolution_clock - this is a clock with the shortest tick period possible on 
	the current system;

	steady_clock - this is a monotonic clock that is guaranteed to never be adjusted.
*/

#include <iostream>
#include <ctime>
#include <chrono>
#include <ratio>
#include <unistd.h>

using namespace std;
using namespace std::chrono;

int main()
{
	auto t = steady_clock::now();
	usleep(1000000);
	auto d = steady_clock::now();
	//cout << "Start: " << system_clock::to_time_t(system_clock::now()+(t-steady_clock::now()) << endl;
	//cout << "End: " << d << endl;
	cout << "duration : " << (d-t).count() << endl;
	return 0;
}
