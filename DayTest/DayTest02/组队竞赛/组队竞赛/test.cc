#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int n;
	while (cin >> n)
	{
		long long sum = 0;
		vector<int> a;
		a.resize(3 * n);
		for (int i = 0; i < (3 * n); i++)
		{
			cin >> a[i];
		}

		sort(a.begin(), a.end());
		//for (int j = n; j < 2*n; j++){
		for (int j = n; j <= 3 * n - 2; j += 2)
			sum += a[j];
		}

		cout << sum << endl;
	}

	system("pause");
	return 0;
}