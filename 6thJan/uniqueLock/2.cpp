#include <iostream>
#include <chrono>
#include <mutex>
#include <thread>

using namespace std;

struct CriticalData{
  mutex mut;
};

void deadLock(CriticalData& a, CriticalData& b){

 // a.mut.lock();
	unique_lock<mutex> guard1(a.mut, defer_lock);
	cout << "Thread: " << this_thread::get_id() << " first mutex" << endl;
	
	this_thread::sleep_for(chrono::milliseconds(1));
 // b.mut.lock();
	
	unique_lock<mutex> guard2(b.mut, defer_lock);
	cout << "	Thread: " << this_thread::get_id() << " second mutex"<< endl;
	
	cout << "		thread:" << this_thread::get_id() << " get both mutex" << endl;
	lock(guard1, guard2);
	//guard1.unlock();
	//guard2.unlock();
  // do something with a and b
  //a.mut.unlock();
  //b.mut.unlock();
	
  
}

int main(){

	cout << endl;

  CriticalData c1;
  CriticalData c2;

  thread t1([&]{deadLock(c1,c2);});
  thread t2([&]{deadLock(c2,c1);});

  t1.join();
  t2.join();	
	cout << endl;
	return 0;

}
