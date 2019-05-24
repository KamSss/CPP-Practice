#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;//接收
	string ret;//最终结果
	string temp;//对比组
	int j = 0;
	int count = 0;
	getline(cin, str);
	for (size_t i = 0; i < str.size(); i++){
		if (!isdigit(str[i])){
		}
		else{
			temp.push_back(str[i]);
			j++;
		}

		if (!isdigit(str[i]) || (i == str.size() - 1)){
			if (j > count){
				count = j;
				j = 0;
				ret.clear();
				ret = temp;
				temp.clear();
			}
			else{
				j = 0;
				temp.clear();
			}
		}
	}
	cout << ret << endl;
	system("pause");
	return 0;
}