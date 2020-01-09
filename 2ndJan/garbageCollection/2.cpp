/*
#include <iostream>
#include <memory>
#include <cstdint>

using namespace std;

int main()
{
	int *p = new int (11);
	
	std::declare_reachable(p);
	
	p = (int*) ((uintptr_t)p ^ UINTPTR_MAX); // scrambling p
	
	p = undeclare_reachable((int*) ((uintptr_t)p ^ UINTPTR_MAX));

	cout << "p: " << *p << endl;
	return 0;
}*/

#include <iostream>
#include <memory>
#include <cstdint>

int main() {
  int * p = new int (1);    // dynamic object

  std::declare_reachable(p);

  p = (int*)((std::uintptr_t)p ^ UINTPTR_MAX);  // scrambling p

  // dynamic object not reachable by any live safely-derived pointer

  p = std::undeclare_reachable((int*)((std::uintptr_t)p ^ UINTPTR_MAX));
  // p is back again a safely-derived pointer to the dynamic object

  std::cout << "p: " << *p << '\n';
  delete p;

  return 0;
}
