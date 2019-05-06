#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void print(int array, int size){
	for (int i = 0; i < size; i++){
		printf("%d", array + i);
	}
	printf("\n");
}

void SelectSort(int array[], int size){
	int min;
	for (int i = 0; i < size; i++){
		min = array[i];
		//拿出最小的数
		for (int j = i + 1; j < size - i; j++){
			if (array[j] < min){
				swap(&array[j], &min);
			}
		}
		//到这里就拿到了 把它放在第一位
		array[i] = min;
	}
}

int main(){
	int array[10] = { 1, 4, 5, 6, 2, 3, 7, 8, 9, 0 };
	SelectSort(array,10);
	print(array, 10);
	system("pause");
	return 0;
}
