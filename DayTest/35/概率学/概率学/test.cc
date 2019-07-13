// write your code here cpp
#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int n;
	while (cin >> n){
		double ret = 1;
		while (n > 1){
			ret *= (n - 1) / n;
			n--;
		}
		cout << ret << "%" << endl;
	}
	return 0;
}