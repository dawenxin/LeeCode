#include<stdio.h>
#include<stdlib.h>

//比较函数，降序排序
int cmp(const void *a, const void *b){
	return *(int*)b - *(int*)a;
}

int hIndex(int* citations, int citationsSize){
	// 1. 降序排序
	qsort(citations, citationsSize, sizeof(int), cmp);

	// 2. 寻找最大h
	int h = 0;
	for(int i =0; i<citationsSize; i++){
		if(citations[i] >= i+1){
			h = i + 1;
		}
		else{
			break;
		}
	}
	return h;
}

int main(){
	int citations1[] = {3,0,6,1,5};
	int size1 = sizeof(citations1) / sizeof(citations1[0]);
	printf("%d\n", hIndex(citations1, size1));

	int citations2[] = {1,3,1};
	int size2 = sizeof(citations2) / sizeof(citations2[0]);
	printf("%d\n", hIndex(citations2, size2));
	return 0;
}

