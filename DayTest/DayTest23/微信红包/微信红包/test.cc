#define _CRT_SECURE_NO_WARNINGS

class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		int half = n / 2;
		int add = 0;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if (gifts[i] == gifts[j]){
					add++;
				}
				if (add >= half){
					return gifts[i];
				}
			}
			add = 0;
		}
		return 0;
	}
};