#define _CRT_SECURE_NO_WARNINGS


//hover法
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



//挖坑法
int partition_2(int array[], int left, int right){
	int begin = left;
	int end = right;
	//pivot是基准值
	int pivot = array[right];
	while (begin < end){
		while (begin < end && array[begin] <= pivot){
			begin++;
		}
		//右侧坑在end处 要填的数在begin处
		array[end] = array[begin];
		while (begin < end && array[end] >= pivot){
			end--;
		}
		array[begin] = array[end];
	}
	//走到这里已经相遇了 把相遇位置的值与之前拿出来的pivot基准值交换即可
	array[begin] = pivot;
	return begin;
}

//前后下标
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