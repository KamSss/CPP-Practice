class BinInsert {
public:
	int binInsert(int n, int m, int j, int i) {
		int temp = n;
		n = n >> j;
		n = n | m;
		n = n << j;
		n = n | temp;
		return n;
	}
};