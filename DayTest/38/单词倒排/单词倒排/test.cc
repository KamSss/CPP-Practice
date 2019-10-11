#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;
	size_t temp = 0;
	while (getline(cin, str)){
		for (size_t i = str.size() - 1; i > 0; --i){
			temp = 0;
			if (str[i] == ' '){
				temp = i + 1;
				while (temp != str.size() && str[temp] != ' '){
					cout << str[temp];
					temp++;
				}
				str.erase(i + 1);
				cout << ' ';
			}
		}
		cout << str[0] << endl;
	}
	return 0;
}