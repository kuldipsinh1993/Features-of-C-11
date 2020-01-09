#include <iostream>
using namespace std;

class T {
};

class X {
	int x;
public:
    explicit operator T() const{
	cout << "Operator is called " << endl;	
    };
};

int main() {
    X x;

    // with cast
    T tc = (T)x; // ok

    // without cast
    //T t = x; // error: E2034 Cannot convert 'X' to 'T'
    return 0;
}
