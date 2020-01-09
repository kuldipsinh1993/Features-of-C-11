#include <iostream>
using namespace std;

class A
{
	int m_Id;
public:
	A():
		m_Id{0}
	{}
	A(int i)
	{
		m_Id = i;
	}
	int getId()
	{
		return m_Id;
	}

	A(const A &a)
	{
		cout << "Copy constructor is called..." << endl;
		m_Id = a.m_Id;	
	}
	A& operator = (const A &a)
	{
		cout << "Assignment operator is called..." << endl;
		m_Id = a.m_Id;
		return *this;
	}
};

int main()
{
	A a(10);
	A b;
	b = a;
	cout << "Obj a.m_Id : " << a.getId() << endl;
	cout << "Obj b.m_Id : " << b.getId() << endl;
	//A c(b);
	
	return 0;
}
