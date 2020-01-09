/**
	If we have a complex string which have "\/" than we can use raw string for 
	simplicity.
**/

#include <iostream>
using namespace std;

	
int main()
{
	string st = R"..a.a(Hello\sdf/dfjoweWfdsoh/sdjfl(jsdlf))`1}[{\./)..a.a";
	cout << st << endl;
	return 0;
}
