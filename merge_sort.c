/*************************************************************************
    > File Name: merge_sort.c
    > Author: jt
    > Mail: zhuiyitaosheng@gmail.com 
    > Created Time: 2014年06月22日 星期日 23时14分39秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void initArray(int *, int);
void setArray(int *, int, int, int *);
void merge(int *, int, int, int);
void showArray(int *, int);
void mergeSort(int *, int, int);

int main()
{
	int A[10];
	printf("Input 10 numbers, please!\n");
	initArray(A, 10);
	showArray(A, 10);
	mergeSort(A, 0, 9);
	showArray(A, 10);
	return 0;
}

void initArray(int *arr, int n)
{
	int i;
	for(i = 0; i < n; ++i)
	{
		scanf("%d", arr + i);
	}
}

void setArray(int *arr, int low_bound, int high_bound, int *outArray)
{
	int i, j;
	i = low_bound;
	j = 0;
	while(i <= high_bound)
	{
		outArray[j] = arr[i];
		++i;
		++j;
	}
	outArray[j] = 100000;
}

//suppose left_array & right_array are sorted
void merge(int *arr, int low_bound, int high_bound, int middle)
{
	int left_length, right_length;
	int left_idx, right_idx;
	int *left_array, *right_array;
	int idx;
	left_idx = 0;
	right_idx = 0;
	idx = low_bound;
	left_length = middle - low_bound + 2;
	right_length = high_bound - middle + 1;
	left_array = (int *)malloc(sizeof(int) * left_length);
	right_array = (int *)malloc(sizeof(int) * right_length);
	setArray(arr, low_bound, middle, left_array);
	setArray(arr, middle+1, high_bound, right_array);
	while(idx <= high_bound)
	{
		if(left_array[left_idx] < right_array[right_idx])
		{
			arr[idx] = left_array[left_idx];
			++left_idx;
		} else
		{
			arr[idx] = right_array[right_idx];
			++right_idx;
		}
		++idx;
	}
}

void showArray(int *arr, int n)
{
	int i;
	for(i = 0; i < n; ++i)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

void mergeSort(int *arr, int low_bound, int high_bound)
{
	int middle;
	middle = (low_bound + high_bound) / 2;
	if(low_bound < high_bound)
	{
		mergeSort(arr, low_bound, middle);
		mergeSort(arr, middle + 1, high_bound);
		merge(arr, low_bound, high_bound, middle);
	}
}
