/*************************************************************************
    > File Name: find_max_subarray_non_recursive.c
    > Author: jt
    > Mail: zhuiyitaosheng@gmail.com 
    > Created Time: 2014年08月12日 星期二 22时24分35秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct subarray
{
	int low_bound;
	int high_bound;
	int value;
}Subarr; 

void input(int *, int );
void show(int *, int );
void find_max_subarray(int *, int , Subarr *);
void compare(int *, int ,  Subarr *);

int main()
{
	int a[10];
	Subarr sa;
	input(a, 10);
	show(a, 10);
	sa.value = a[0];
	sa.low_bound = 0;
	sa.high_bound = 0;
	find_max_subarray(a, 9, &sa);
	printf("The max suarray is from %d to %d, value is %d\n", sa.low_bound, sa.high_bound, sa.value);
}

void find_max_subarray(int *arr, int n, Subarr *sa)
{
	int max_sum;
	int idx;
	max_sum = 0;
	for (idx = 0; idx < n; ++idx)
	{
		compare(arr, idx+1, sa);
	}
}

void compare(int *arr, int flag, Subarr *sa)
{
	int idx;
	int sum;
	sum = 0;
	for (idx = flag; idx >= 0; --idx)
	{
		sum += *(arr + idx);
		if (sum > sa -> value)
		{
			sa -> value = sum;
			sa -> low_bound = idx;
			sa -> high_bound = flag;
		}
	}
}

void input(int *arr, int n)
{
	int i;
	printf("Please inout %d numbers:\n", n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d", arr + i);
	}
}

void show(int *arr, int n)
{
	int i;
	for (i = 0; i < n; ++i)
	{
		printf("%d\t", *(arr + i));
	}
	printf("\n");
}
