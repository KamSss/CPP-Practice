#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	int StrToInt(string str) {
		if (str.empty)
			return 0;
		int symbol = 1;
		if (str[0] == '-'){
			symbol = -1;
			str[0] = '0';
		}
		else if (str[0] == '+'){
			symbol = 1;
			str[0] = '0';
		}

		int sum = 0;
		for (size_t i = 0; i < str.size(); i++){
			if (str[i] < '0' || str[i] > '9'){
				return 0;
			}

			sum = sum * 10 + str[i] - '0';
		}

		return symbol*sum;
	}
};