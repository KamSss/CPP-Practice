#include<iostream>

using namespace std;

int dig(int n){
	if (n == 1){
		return 0;
	}
	if (n == 2){
		return 1;
	}
	return (n / 3) + dig((n / 3) + (n % 3));
}

int main(){
	int n = 0;
	while (cin >> n){
		int ret = dig(n);
		cout << ret << endl;
	}
	return 0;
}