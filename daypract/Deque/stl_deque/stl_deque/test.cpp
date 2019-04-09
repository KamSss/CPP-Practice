#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

template <class T,class Ref,class Ptr>

class DequeIterator{
public:
	typedef DequeIterator<T, Ref, Ptr> self;

	Ref operator*()
	{
		return *cur;
	}

	self& operator++()
	{

	}
private:
	T* first;
	T* end;
	T* cur;
	T* node;
};
