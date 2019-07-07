// 牛客:最难的问题
#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;
	string key = "VWXYZABCDEFGHIJKLMNOPQRSTU";
	while (getline(cin, str)){
		for (size_t i = 0; i < str.size(); i++){
			if (str[i] == ' ')
				cout << ' ';
			else{
				cout << key[str[i] - 'A'];
			}
		}
		cout << endl;
	}
	return 0;
}