#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main(){
	int x = 9990;
	x = x & (x - 1);
	cout << x << endl;
	system("pause");
	return 0;
}