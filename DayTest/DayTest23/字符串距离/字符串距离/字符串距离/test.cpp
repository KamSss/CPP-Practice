#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

int main(){
	string str1, str2;
	while (cin >> str1 >> str2){
		size_t ret = 0;
		size_t len1 = str1.size();
		size_t len2 = str2.size();
		size_t _short, chazhi;
		//_shrot����̵ĳ��� chazhi�ǳ��ȵĲ�ֵ
		if (len1 >= len2){
			_short = len2;
			chazhi = len1 - len2;
		}
		else{
			_short = len1;
			chazhi = len2 - len1;
		}
		//������ͬ�Ĳ��ֲ�ͬ����ĸ�� + ���ȵĲ�
		//a)��ͬ���ֵĲ�ͬ��ĸ��
		for (size_t i = 0; i < _short; i++){
			for (size_t j = 0; j < len1; j++){
				if (str1[i] != str2[i]){
					ret++;
				}
			}
		}
		//b)���ϳ��ȵĲ�(�����������û��һ��ʼ�ͷ��ڱ�����ʼ����)
		ret += chazhi;
		cout << ret << endl;
	}
	return 0;
}