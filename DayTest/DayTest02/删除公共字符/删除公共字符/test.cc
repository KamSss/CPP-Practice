#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

void test(string str1,string str2){
	size_t count = 0;
	size_t str1Lenth = str1.size();
	size_t str2Lenth = str2.size();
	string ret = str1;
	if (str1.size() == 0 && str2.size() == 0){
		return;
	}

	for (size_t i = 0; i < str2Lenth; i++){
		str1 = ret;
		count = 0;
		for (size_t j = 0; j < str1.size(); j++){
			if (str1[j] == str2[i]){
				ret.erase(j - count, 1);
				count++;
			}
		}
	}
	cout << ret <<endl;
	return;
}

int main(){
	string str1 = "They are students.";
	string str2 = "aeiou";
	//string str1 = "abcd acc";
	//string str2 = "cd";
	test(str1, str2);

	system("pause");
	return 0;
}