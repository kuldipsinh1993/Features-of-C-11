/*
	c++11 recognizes >> as a correct termination of two template arguments lists.
*/

#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

int main()
{
	list<vector<string>> lvs;
	return 0;
}
