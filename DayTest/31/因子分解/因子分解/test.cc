#include<iostream>
#include<cmath>

using namespace std;

int main(){
	unsigned int n = 0;
	while (cin >> n){
		unsigned int temp = n;
		cout << n << " = ";
		for (unsigned i = 2; i <= sqrt(n); i++){
			//һ�������Զ�γ� ������while
			while (temp%i == 0 && temp != i){
				temp = temp / i;
				cout << i << " * ";
			}
		}
		cout << temp << endl;
	}
	return 0;
}