#include<iostream>
#include<algorithm>

using namespace std;

bool isPrime(int n){
	int temp = sqrt(n);
	for (int i = 2; i <= temp; i++){
		if (temp%i == 0)
			return false;
	}
	return true;
}

int main(){
	int n = 0;
	int half1 = 0;
	int half2 = 0;
	while (cin >> n){
		half1 = n / 2;
		half2 = half1;
		while (isPrime(half1) && isPrime(half2)){
			half1++;
			half2--;
		}
		cout << half1 << endl << half2 << endl;
	}

	return 0;
}