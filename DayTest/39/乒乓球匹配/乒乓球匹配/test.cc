#include<iostream>
#include<string>

using namespace std;

int main(){
	string str1, str2;
	while (cin >> str1 >> str2){
		int flag = 1;
		int ret[26] = { 0 };
		for (size_t i = 0; i < str1.size(); i++){
			ret[str1[i] - 'A']++;
		}
		for (size_t j = 0; j < str2.size(); j++){
			if (ret[str2[j] - 'A'] == 0){
				flag = 0;
				cout << "No" << endl;
				break;
			}
			else{
				ret[str2[j] - 'A']--;
			}
		}
		if (flag)
			cout << "Yes" << endl;
	}
	return 0;
}