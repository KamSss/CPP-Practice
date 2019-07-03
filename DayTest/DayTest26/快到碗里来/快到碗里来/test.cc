#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

int main(){
	string n;
	string temp = "00";
	while (cin >> n){
		reverse(n.begin(), n.end());
		n += temp;
		cout << n << endl;
	}
	return 0;
}