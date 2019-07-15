#include<iostream>
#include<string>

using namespace std;

int main(){
	string list, tag;
	while (getline(cin, list) && getline(cin, tag)){
		size_t j = 0;
		int sum = 0;
		for (size_t i = 0; i < list.size(); i++){
			if (list[i] == ',' || list[i] == '\"'){
				continue;
		}
			else if (list[i] == tag[j]){
				sum++;
				if (sum == tag.size()){
					cout << "Ignore" << endl;
					break;
				}
			}
		}
		if (sum != tag.size())
			cout << "Important!" << endl;
	}
	return 0;
}
