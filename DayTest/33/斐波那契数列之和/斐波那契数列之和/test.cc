#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main(){
	long long fib[80];
	fib[0] = 1;
	fib[1] = 1;
	for (int i = 2; i < 80; i++){
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	int x, y;
	while (cin >> x >> y){
		long long ret = 0;
		for (int i = x - 1; i < y; i++){
			ret += fib[i];
		}
		cout << ret << endl;
	}
	return 0;
}