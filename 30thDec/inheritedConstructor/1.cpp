#include <iostream>
#include <string>
using namespace std;

class person
{
	int age;
	string name;
public:
	double marks;
	person()
	{}
	person(int a, double m, string n):
		age{a}, marks{m}, name{n}
	{}
	void setMarks(double d)
	{
		marks = d;
	}
};

class student: person
{
public:
	using person::setMarks;
	void setMarks(int d)
	{
		marks = d;
	}
	double getMarks()
	{
		return marks;
	}
};

int main()
{
	person p(21,11.5,"Om");
	p.setMarks(12.1);

	student s;
	s.setMarks(22.2);
	cout << "Marks : " << s.getMarks() << endl;
}
