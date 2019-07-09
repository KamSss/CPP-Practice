#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>

using namespace std;

int main(){
	int year, n = 48;
	vector<int> str = "01010120021705260704090111271225";
	while (cin >> year){
		for (int i = 0; i < n; i + 6){
			cout << year << "-" << str[i] << " ";
		}
	}
	return 0;
}