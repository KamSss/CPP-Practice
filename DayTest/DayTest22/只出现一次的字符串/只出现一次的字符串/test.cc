#include<iostream>
#include<string>

using namespace std;

/*int main(){
	int count[256] = { 0 };
	string str;
	while (cin >> str){
		int flag = 1;
		for (size_t i = 0; i < str.size(); i++){
			count[str[i]]++;
		}
		for (size_t j = 0; j < str.size(); j++){
			if (count[str[j]] == 1){
				cout << str[j] << endl;
				flag = 0;
				break;
			}
		}
		if (flag)
			cout << -1 << endl;
	}
	return 0;
}*/

int main(){
	int a, b;
	while (cin >> a >> b){
		int c = a % b;
		cout << c << endl;
	}
	return 0;
}