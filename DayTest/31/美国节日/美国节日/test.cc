#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

int main(){
	int year, n = 32;
	string str = "01010120021705260704090111271225";
	while (cin >> year){
		for (int i = 0; i < n; i + 4){
			cout << year << "-" << str[i] << " ";
		}
	}
	return 0;
}