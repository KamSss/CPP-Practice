#include<iostream>
#include<vector>

using namespace std;

int maxG(int a, int b){
	int c = 0;
	while (c = a % b){
		a = b;
		b = c;
	}
	return b;
}
int main(){
	int n, power;
	vector<int> mt;
	while (cin >> n >> power){
		//��Ź�����Ϣ
		mt.resize(n);
		for (int i = 0; i < n; i++){
			cin >> mt[i];
		}

		for (int j = 0; j < n; j++){
			if (mt[j] <= power){
				power += mt[j];
			}
			else{
				power += maxG(mt[j], power);
			}
		}
		cout << power << endl;
	}
	return 0;
}