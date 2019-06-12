#include<iostream>
#include<string>

using namespace std;

int main(){
	string str1, str2;
	str1 = "abcd";
	str2 = "abcabcd";
		// 保证str1是比str2长的
	if (str1.size() < str2.size()){
		swap(str1, str2);
	}
	string ret, temp;
	int r = 0;
	int t = 0;
	for (size_t i = 0; i < str2.size(); i++){
		if (str1[i] == str2[i]){
			temp.push_back(str1[i]);
			t++;
		}
		else{
			if (ret.empty() || t > r){
				ret = temp;
				r = t;
				temp.clear();
				t = 0;
			}
			else if (t < r){
				temp.clear();
				t = 0;
			}
		}
	}
	cout << ret << endl;
	system("pause");
	return 0;
}