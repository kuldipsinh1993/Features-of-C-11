#include <mutex>
#include <iostream>
#include <unistd.h>
using namespace std;

mutex m;

int main()
{

	unique_lock<mutex> lock1(m);
	
	if(lock1.owns_lock())
		cout << "Lock is associated with the mutex" << endl;
	else
		cout << "Lock is empty" << endl;

	/*
	if(m.try_lock()==true)
		cout << "Lock acquired successfully" << endl;
	else
		cout << "Lock is not able to acquire" << endl;
	*/
	
	
	
	lock1.unlock();
	
	if(lock1.owns_lock())
		cout << "Lock is associated with the mutex" << endl;
	else
		cout << "Lock is empty" << endl;
	
	m.lock();
	
	if(m.try_lock())
		cout << "Lock got " << endl;
	else
		cout << "Lock not available << endl" << endl;

	usleep(2000000);
	m.unlock();
	if(m.try_lock())
		cout << "Lock got " << endl;
	else
		cout << "Lock not available << endl" << endl;

	/*
	mutex* mP = lock1.release();
	// try_lock() returns if mutex is not locked
	if(mP->try_lock())
		cout << "It is not locked" << endl;
	else
		cout << "It is locked" << endl;
	*/
	return 0;
}
