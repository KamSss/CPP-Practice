#include<iostream>
#include<string>

using namespace std;

int main(){
	string s, t;
	while (cin >> s >> t){
		int ret = 0;
		size_t j = 0;
		for (size_t i = 0; i < s.size(); i++){
			int temp = i;
			for (j = 0; j < t.size(); j++){
				if (s[temp] == t[j]){
					temp++;
					if (j == t.size() - 1){
						ret++;
						i = temp - 1;
					}
				}
				else
					break;
			}
		}
		cout << ret << endl;
	}
	return 0;
}