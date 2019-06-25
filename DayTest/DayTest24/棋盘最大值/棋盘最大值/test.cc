#define _CRT_SECURE_NO_WARNINGS

class Bonus {
public:
	int getMost(vector<vector<int> > board) {
		int i = 0;
		int j = 0;
		vector<vector<int>> ret;
		for (int t = 0; t < 6; t++) {
			vector<int> tmp(6, 0);
			ret.push_back(tmp);
		}
		ret[0][0] = board[0][0];
		for (i = 0; i < 6; i++){
			for (j = 0; j < 6; j++){
				if (i == 0 && j == 0)
					continue;
				//�ڵ�һ�л��һ��ʱ ֻ������һ��
				else if (j == 0){
					ret[i][j] = ret[i - 1][j] + board[i][j];
				}
				else if (i == 0){
					ret[i][j] = ret[i][j - 1] + board[i][j];
				}
				//�ұߺ����涼�����ߵ����
				else{
					ret[i][j] = max(ret[i - 1][j], ret[i][j - 1]) + board[i][j];
				}
			}
		}
		return ret[i - 1][j - 1];
	}
};