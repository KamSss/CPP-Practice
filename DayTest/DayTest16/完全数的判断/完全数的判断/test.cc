#include<iostream>
#include<vector>

using namespace std;

int pernum(int num){
	vector<int> v;
	int temp = 0;
	for (int j = 1; j < num; j++){
		if (!(num % j)){
			v.push_back(j);
		}
	}
	for (size_t k = 0; k < v.size(); k++){
		temp += v[k];
	}
	if (temp != num){
		return 0;
	}
	return 1;
}

int main(){
	int n = 0;
	while (cin >> n){
		int count = 0;
		for (int i = 2; i <= n; i++){
			count += pernum(i);
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}