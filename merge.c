/*************************************************************************
    > File Name: merge.c
    > Author: jt
    > Mail: zhuiyitaosheng@gmail.com
    > Created Time: 2014年06月19日 星期四 12时18分45秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void merge(int *, int);
int* setArray(int *, int, int, int*);
void show(int *, int);

int main()
{
	int A[] = {1, 7, 19, 35, 88, 16, 19, 30, 45, 66};
	int length;
	length = 10;
	show(A, length);
	merge(A, length);
	show(A, length);
}

void merge(int *arr, int n)
{
	int middle;
	int idx, left, right;
	int *leftArray, *rightArray;
	idx = 0;
	left = 0;
	right = 0;
	middle = n/2;
	leftArray = (int *)malloc(sizeof(int) * (middle + 1));
	rightArray = (int *)malloc(sizeof(int) * (n - middle + 1));
	leftArray = setArray(arr, 0, middle, leftArray);
	rightArray = setArray(arr, middle, n, rightArray);
	while(left < (middle + 1) && right < (n - middle + 1) && idx < n)
	{
		if(leftArray[left] < rightArray[right])
		{
			arr[idx] = leftArray[left];
			++left;
		} else
		{
			arr[idx] = rightArray[right];
			++right;
		}
		++idx;
	}
}

int* setArray(int *arr, int down, int up, int *outArray)
{
//	int *outArray;
	int i, j;
//	outArray = (int *)malloc(sizeof(int) * (up - down +1));
	j = 0;
	for(i = down; i < up; ++i)
	{
		*(outArray + j) = arr[i];
		++j;
	}
	*(outArray + j) = 10000;
	return outArray;
}

void show(int *arr, int n)
{
	int i;
	i = 0;
	while(i < n)
	{
		printf("%d\t", arr[i]);
		++i;
	}
	printf("\n");
}
