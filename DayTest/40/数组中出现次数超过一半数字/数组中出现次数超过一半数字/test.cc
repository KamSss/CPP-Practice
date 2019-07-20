#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		size_t lenth = numbers.size();
		int ret[10] = { 0 };
		for (size_t i = 0; i < lenth; i++){
			ret[numbers[i]]++;
		}
		for (int j = 0; j < 10; j++){
			if (ret[j] >= lenth / 2 + 1){
				return j;
			}
		}
		return 0;
	}
};