#include "temp.h"
#include <iostream>

using namespace std;


extern template double add <double>(double, double);

int main()
{
	cout << add<double>(11,12.23) << endl;
}
