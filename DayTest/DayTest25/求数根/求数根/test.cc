#include<iostream>
#include<vector>

using namespace std;

int bitdig(int x){
	int sum = 0;
	while (x != 0){
		sum += x % 10;
		x = x / 10;
	}
	if (sum >= 10){
		return bitdig(sum);
	}
	return sum;
}
int main(){
	vector<int> n;
	vector<int> ret;
	int i = 0;
	while (cin >> n[i]){
		i++;
	}
	for (int j = 0; j < n.size(); j++){
		ret[j] = bitdig(n[j]);
	}
	for (int j = 0; j < n.size(); j++){
		cout << ret[j];
	}
	return 0;
}