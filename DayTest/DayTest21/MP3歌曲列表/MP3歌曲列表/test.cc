#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
	int n = 0;
	string str;
	while (cin >> n >> str){
		cout << str << endl;
		vector<int> list(n);
		int temp = 1;
		for (int i = 0; i < n; i++){
			list[i] = temp;
			temp++;
		}
		vector<int> ret;
		for (int t = 0; t < 4; t++){
			ret.push_back(list[t]);
		}
		for (size_t j = 0; j < str.size(); j++){
			if (str[j] == D && ret[])
		}
		//for (size_t x = 0; x < ret.size(); x++){
		//	cout << ret[x] << endl;
		//}
	}
	return 0;
}