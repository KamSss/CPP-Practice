#include<iostream>
#include<string>

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
	string n;
	while (cin >> n){
		int m = 0;
		for (int i = 0; i < n.size(); i++){
			m += n[i] - '0';
		}
		if(m > 9){
			m = bitdig(m);
		}
		cout << m << endl;
	}
	return 0;
}
