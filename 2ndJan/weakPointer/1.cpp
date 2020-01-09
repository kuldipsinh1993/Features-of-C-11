#include <iostream>
#include <memory>
using namespace std;

class Son;
class Daughter;

class Mother
{
	// If we make "mySon" shared_ptr it won't get destructed automatically
	// Since circular reference is generated.

	//shared_ptr<const Son> mySon;
	weak_ptr<const Son> mySon;
	weak_ptr<const Daughter> myDaughter;

public:
	~Mother()
	{
		cout << "Mother is gone..." << endl;	
	}
	void setSon(const shared_ptr<Son> s)
	{
		mySon = s;
		if(mySon.lock())
			cout << "Son weak_ptr is occupied" << endl;		
	}
	void setDaughter(const shared_ptr<Daughter> s)
	{
		myDaughter = s;		
	}

};

class Son
{
	shared_ptr<const Mother> myMother;
public:
	Son(shared_ptr<Mother> m):
		myMother{m}
	{}
	~Son()
	{
		cout << "Son is gone..." << endl;
	}
};
class Daughter
{
	shared_ptr<const Mother> myMother;
public:
	Daughter(shared_ptr<Mother> m):
		myMother{m}
	{}
	~Daughter()
	{
		cout << "Daughter is gone..." << endl;
	}
};
int main()
{
	//make_shared<Mother> mother;
	shared_ptr<Mother> mother = make_shared<Mother>();
	//shared_ptr<Mother> mother = shared_ptr<Mother>(new Mother);
	shared_ptr<Son> son{new Son(mother)};
	//shared_ptr<Son> son = shared_ptr<Son>(new Son(mother));
	shared_ptr<Daughter> daughter{new Daughter(mother)};
	//shared_ptr<Daughter> daughter = shared_ptr<Daughter>(new Daughter(mother));

	mother->setSon(son);
	mother->setDaughter(daughter);
	
	return 0;
}
