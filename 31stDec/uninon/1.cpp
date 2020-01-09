#include <iostream>
using namespace std;

union A
{
	int n; 
	double d;
};
int main()
{
	A a;
	
	//cout << "size of A : " << sizeof(a) << endl;
	
	//cout << "size of A : " << sizeof(a) << endl;
	//while((i= a.n>>1))
	//{
	//	cout << i;
	//}
	a.n = 2147483647;
	cout << "a.n : " << a.n << endl;
	cout << "a.d : " << a.d << endl;
	cout << "Bit : ";
	//int i;
	for(int i=0; i<64; i++)
	{
		cout << (a.n>>i &1);
	}
	//while((i= a.n>>1))
	//{
	//	cout << i;
	//}
	//cout << "size of A : " << sizeof(a) << endl;

	
	cout << endl;
	
	a.d = 5678.111;	
	cout << "a.n : " << a.n << endl;
	cout << "a.d : " << a.d << endl;
	cout << "Bit : ";
	//int i;
	for(int i=0; i<64; i++)
	{
		cout << (int(a.d)>>i &1);
	}
	cout << endl;
	return 0;
}
