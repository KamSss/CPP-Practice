#define _CRT_SECURE_NO_WARNINGS


//hover��
int partition_1(int array[], int left, int right){
	int begin = left;
	int end = right;
	while (begin < end){
		while (begin < end && array[begin] <= array[right]){
			begin++;
		}
		while (begin < end && array[end] >= array[right]){
			end--;
		}
		Swap(array + begin, array + end);
	}
	return begin;
}



//�ڿӷ�
int partition_2(int array[], int left, int right){
	int begin = left;
	int end = right;
	//pivot�ǻ�׼ֵ
	int pivot = array[right];
	while (begin < end){
		while (begin < end && array[begin] <= pivot){
			begin++;
		}
		//�Ҳ����end�� Ҫ�������begin��
		array[end] = array[begin];
		while (begin < end && array[end] >= pivot){
			end--;
		}
		array[begin] = array[end];
	}
	//�ߵ������Ѿ������� ������λ�õ�ֵ��֮ǰ�ó�����pivot��׼ֵ��������
	array[begin] = pivot;
	return begin;
}

//ǰ���±�
int partition_3(int array[], int left, int right){
	int i = left;
	int d = left;
	for (i = left; i < right; i++){
		if (array[i] < array[right]){
			Swap(array + d, array + i);
			d++;
		}
	}
}

int main(){
	return 0;
}