#include <iostream>
#include <regex>

using namespace std;

int main()
{
	string a = "Helloworld, what this world is having everything.";
	
	regex b("Hello[a-zA-Z]+");
	
	regex c("what");
	// Replace "what" with "go" in string a.
	string ab = regex_replace(a, c, "go") ;
	cout << ab << endl;

	
	return 0;
}
