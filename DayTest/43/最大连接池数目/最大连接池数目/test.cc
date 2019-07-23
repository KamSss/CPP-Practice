#include<iostream>
#include<string>

using namespace std;

int main(){
	int n = 0;
	while (cin >> n){
		string nec;
		int ret = 0, tmp = 0;
		for (int i = 0; i < n; i++){
			getline(cin, nec);
			if (nec[2] == 'c'){
				tmp++;
				if (tmp > ret)
					ret++;
			}
			else{
				tmp--;
			}
		}
		cout << ret << endl;
	}
	return 0;
}
