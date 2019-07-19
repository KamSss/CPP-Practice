#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	string a = "abc";
	string b = "dbc";
	vector<string> dit;
	dit.push_back(a);
	dit.push_back(b);
	cout << dit[0][0] << endl;
	system("pause");
	return 0;
}