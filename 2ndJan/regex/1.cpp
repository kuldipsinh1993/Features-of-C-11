#include <iostream>
#include <regex>

using namespace std;

int main()
{
	string a = "Hello world";
	
	regex b("(Hello)(.*)");

	if( regex_match(a, b))
		cout << "String a matches regular expression b" << endl;

	if( regex_match(a.begin(), a.end(), b))
		cout << "String 'a' matchs with regular expression "
			"'b' in the range from 0 to string end" << endl;
	return 0;
}
