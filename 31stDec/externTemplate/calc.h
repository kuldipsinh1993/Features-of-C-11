#ifndef __class_h__
#define __class_h__

#include <iostream>

template <class T> 
class Operations
{
	T operation;
public:
	int sum();
	T getOperation()
	{
		return operation;
	}
	void setOperation(T op)
	{
		operation = op;
	}
};

//extern template class Operations<char>;
//extern template class Operations<char, float>;
#endif
