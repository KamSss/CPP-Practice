#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

template<class T>
void Swap(T& left, T& right)
{
	T temp = left;
	left = right;
	right = temp;
}

int main()
{
	int a = 1;
	int b = 2;
	Swap(a, b);
	cout << a << b << endl;

	system("pause");
	return 0;
}