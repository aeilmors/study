/*************************************************************************
    > File Name: FindMaxSubarray.c
    > Author: jt
    > Mail: zhuiyitaosheng@gmail.com 
    > Created Time: 2014年08月06日 星期三 22时49分23秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int *arr;
	int low;
	int high;
	//int item_sum;
}Subarr;

Subarr FindMaxCrossingSubarray(Subarr Sa);
void ShowArray(int *arr, int n);
void ArrayInput(int *arr, int n);
Subarr FindMaxSubarray(Subarr Sa);
Subarr setTmpSubarr(Subarr Sa, int new_low, int new_high);
int getSum(Subarr Sa);

int main()
{
	int arr_test[10];
	Subarr Sa, result_Sa;
	ArrayInput(arr_test, 10);
	ShowArray(arr_test, 10);
	Sa.arr = arr_test;
	Sa.low = 0;
	Sa.high = 9;
	result_Sa = FindMaxSubarray(Sa);
	printf("The max subarray------left_flag:%d\tright_flag:%d\t:max_sum:%d\n", result_Sa.low, result_Sa.high, getSum(result_Sa));
	return 0;
}

void ArrayInput(int *arr, int n)
{
	int i;
	printf("Please input %d numbers:\n", n);
	for(i = 0; i < n; ++i)
	{
		scanf("%d", arr + i);
	}
}

void ShowArray(int *arr, int n)
{
	int i;
	for(i = 0; i < n; ++i)
	{
		printf("%d\t",*(arr + i));
	}
	printf("\n");
}

//void FindMaxSubarray

Subarr FindMaxCrossingSubarray(Subarr Sa)
{
	int idx, mid;
	int max_left, max_right, sum_left, sum_right;
	int left_flag, right_flag, max_sum;
	mid = (Sa.low + Sa.high) / 2;
	max_left = -10000;
	max_right = -10000;
	sum_left = 0;
	sum_right = 0;
	for(idx = mid; idx >= Sa.low; --idx)
	{
		sum_left += Sa.arr[idx];
		if(sum_left > max_left)
		{
			max_left = sum_left;
			left_flag = idx;
		}
	}
	for(idx = mid+1; idx <= Sa.high; ++idx)
	{
		sum_right += Sa.arr[idx];
		if(sum_right > max_right)
		{
			max_right = sum_right;
			right_flag = idx;
		}
	}
	//max_sum = max_left + max_right;
	return setTmpSubarr(Sa, left_flag, right_flag);
}

Subarr FindMaxSubarray(Subarr Sa)
{
	Subarr left_sa, right_sa, mid_sa, tmp_sa;
	int mid;
	int left_sum, right_sum, mid_sum;
	if (Sa.low == Sa.high)
	{
		return Sa;
	} else
	{
		mid = (Sa.low + Sa.high) / 2;
		left_sa = FindMaxSubarray(setTmpSubarr(Sa, Sa.low, mid));
		right_sa = FindMaxSubarray(setTmpSubarr(Sa, mid + 1, Sa.high));
		mid_sa = FindMaxCrossingSubarray(Sa);
		left_sum = getSum(left_sa);
		right_sum = getSum(right_sa);
		mid_sum = getSum(mid_sa);
		if (left_sum >= right_sum && left_sum >= mid_sum)
			return left_sa;
		else if (mid_sum >= right_sum && mid_sum >= left_sum)
			return mid_sa;
		else
			return right_sa;
	}
}

Subarr setTmpSubarr(Subarr Sa, int new_low, int new_high)
{
	Subarr tmp;
	tmp.low = new_low;
	tmp.high = new_high;
	tmp.arr = Sa.arr;
	return tmp;
}

int getSum(Subarr Sa)
{
	int sum;
	int idx;
	sum = 0;
	for (idx = Sa.low; idx <= Sa.high; ++idx)
	{
		sum += Sa.arr[idx];
	}
	return sum;
}