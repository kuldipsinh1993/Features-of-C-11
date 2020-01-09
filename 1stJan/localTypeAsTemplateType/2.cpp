#include <iostream>
//#include <algorithm>
#include <vector>
#include <iterator>
#include <typeinfo>
using namespace std;

template<class T>
using vec = vector<T>;

typedef int X;
/* // C++14
void sort(auto i, auto j, auto k)
{
	cout << "type of struct : " << typeid(k).name() << endl;
	for(auto m=i; m!=j; m++)
	{
		for(auto l = i; l!=j; l++)
		{
			if(k(*m,*(l)))
			{
				int temp = *m;
				*m = *l;
				*l = temp;
			}
			//cout << "l : " << *l << "	*l+1: " << *m << endl;
		}
	}
}
*/


void f(vector<X> & v);
	//C++11 Try to implement

void sort(
		vector<int>::iterator i, 
		vector<int>::iterator j, 
		f(std::vector<int>&)::Less k
	 ) 
{
	//cout << "type of struct : " << typeid(k).name() << endl;
	for(auto m=i; m!=j; m++)
	{
		for(auto l = i; l!=j; l++)
		{
			if(k(*m,(*l)))
			{
				int temp = *m;
				*m = *l;
				*l = temp;
			}
			//cout << "l : " << *l << "	*l+1: " << *m << endl;
		}
	}
}

void f(vector<X> & v)
{
	struct Less
	{
		bool operator()(const X a, const X b) {return a<b; }
	};
	
	// Type of Less(): Z1fRSt6vectorIiSaIiEEE4Less
	sort(v.begin(),v.end(), Less()); // Passing local type struct
}
int main()
{
	vec<int> ve = {21,3,23,4,5,64};
	f(ve);
	for(auto it:ve)
		cout << it << " ";
	cout << endl;
	return 0;
}
