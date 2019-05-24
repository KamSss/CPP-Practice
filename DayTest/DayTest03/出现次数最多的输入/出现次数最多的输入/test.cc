#include<iostream>
#include<vector>
#include<algorithm>>

using namespace std;

int main(){
	int n = 0;
	vector<int> v;
	while (cin >> n){
		v.push_back(n);
	}

	sort(v.begin(), v.end()); \
		size_t size = v.size() / 2;
	size_t count = 1;
	int temp = v[0];
	for (size_t i = 0; i < v.size(); i++){
		if (temp == v[i]){
			count++;
		}
		else if (count >= size){
			cout << temp;
			temp = v[i + 1];
			count = 1;
		}
	}
	cout << endl;
	return 0;
}