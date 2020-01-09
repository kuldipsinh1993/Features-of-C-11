/****
	C++11 enum is strongly typed and strongly scoped.
****/

#include <iostream> 
using namespace std; 
  
int main() 
{ 
	// Defining enum1 Gender 
	//enum class Gender { Male,Female }; 
  
	// Defining enum2 Gender2 with same values 
	// This will throw error 
	enum class Gender2 { Male, Female }; 
  
	// Creating Gender type variable 
	
	//Gender gender = Male; 
	//Gender2 gender2 = Female; 
	Gender gender = Gender::Male; 
	Gender2 gender2 = Gender2::Female; 
  
	//cout << gender << endl << gender2 << endl; 
	cout << int(gender) << endl << int(gender2) << endl; 
  
    return 0; 
} 

