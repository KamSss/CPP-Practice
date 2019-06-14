#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	string str1, str2;
	while (cin >> str1 >> str2){
		size_t len1 = str1.size();
		size_t len2 = str2.size();
		int max = 0;
		vector<vector<int>> dp(len1, vector<int>(len2, 0));
		for (int i = 0; i < len1; i++){
			for (int j = 0; j < len2; j++){
				if (str1[i] == str2[j]){
					if (i >= 1 && j >= 1){
						dp[i][j] = dp[i - 1][j - 1] + 1;
					}
					else{
						dp[i][j] = 1;
					}
				}
				if (max < dp[i][j]){
					max = dp[i][j];
				}
			}
		}
		cout << max << endl;
	}
	return 0;
}