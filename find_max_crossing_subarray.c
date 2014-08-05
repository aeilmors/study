/*************************************************************************
    > File Name: find_max_crossing_subarray.c
    > Author: jt
    > Mail: zhuiyitaosheng@gmail.com 
    > Created Time: 2014年08月05日 星期二 16时41分36秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void find_max_crossing_subarray(int *arr, int low, int high, int mid, int *left_flag, int *right_flag, int *max_sum);
void show_array(int *arr, int n);
void array_input(int *arr, int n);
//void find_max_subarray(int *arr, int start, int end, int *);

int main()
{
	int arr_test[10];
	int left_flag, right_flag, max_sum;
	array_input(arr_test, 10);
	show_array(arr_test, 10);
	find_max_crossing_subarray(arr_test, 0, 9, 4, &left_flag, &right_flag, &max_sum);
	printf("left_flag:%d\tright_flag:%d\tmax_sum:%d\n", left_flag, right_flag, max_sum);
	return 0;
}

void array_input(int *arr, int n)
{
	int i;
	printf("Please input %d numbers:\n", n);
	for(i = 0; i < n; ++i)
	{
		scanf("%d", arr + i);
	}
}

void show_array(int *arr, int n)
{
	int i;
	for(i = 0; i < n; ++i)
	{
		printf("%d\t",*(arr + i));
	}
	printf("\n");
}

//void find_max_subarray

void find_max_crossing_subarray(int *arr, int low, int high, int mid, int *left_flag, int *right_flag, int *max_sum)
{
	int idx;
	int max_left, max_right, sum_left, sum_right;
	max_left = 0;
	max_right = 0;
	sum_left = 0;
	sum_right = 0;
	for(idx = mid; idx >= low; --idx)
	{
		sum_left += arr[idx];
		if(sum_left > max_left)
		{
			max_left = sum_left;
			*left_flag = idx;
		}
	}
	for(idx = mid+1; idx <= high; ++idx)
	{
		sum_right += arr[idx];
		if(sum_right > max_right)
		{
			max_right = sum_right;
			*right_flag = idx;
		}
	}
	*max_sum = max_left + max_right;
}
