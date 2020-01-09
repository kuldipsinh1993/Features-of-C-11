#include <iostream>
#include <regex>

using namespace std;

int main()
{
	string a = "Helloworld, Hellothis world is having everything.";
	
	regex b("Hello[a-zA-Z]+");

	smatch m;
	
	
	while(regex_search(a, m, b))
	{
		for (auto x : m)
			cout << x << " ";
		cout << endl;
		a = m.suffix().str();
	}
	return 0;
}
