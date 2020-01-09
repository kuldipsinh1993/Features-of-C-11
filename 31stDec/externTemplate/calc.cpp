#include "calc.h"
using namespace std;

//template class Operations<char>;

template<>
int Operations<char>::sum()
{
	cout << "How many numbers: ";
	int n;
	cin >> n;
	int res=0;
	char op = getOperation();
	//cout << "Op : " << op << endl;
	//while(n)
	
	switch(op)
	{
		case '+' : 
			while(n)
			{	
				int tmp;
				cin >> tmp;
				res += tmp;
				n--;
			}
			break;
		case '-' : 
			while(n)
			{	
				int tmp;
				cin >> tmp;
				res -= tmp;
				n--;
			}
			break;
		case '*' : 
			res = 1;
			while(n)
			{	
				int tmp;
				cin >> tmp;
				res *= tmp;
				n--;
			}
			break;
		case '/' : 
			break;
		default:
			cout << "Please choose Valid operation..." << endl;
	}
	return res;
}

int main()
{
	extern Operations<char> ch;
	char op;
	while(true)
	{
		cout << "Choose the operation (+,-,*,/): " ;
		cin >> op;
		if(op=='+' || op=='-' || op=='*' || op=='/')
			break;
		else
			cout << "Please choose valid operation..." << endl;
	}
	ch.setOperation(op);
	cout << "Result: " << ch.sum() << endl;
	return 0;
}
