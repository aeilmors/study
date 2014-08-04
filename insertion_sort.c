#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *arr, int n);
void show(int *arr, int n);

int main()
{
    int test[] = {12, 5, 67, 2, 66, 3, 5, 89};
    int n = 8;
    show(test, n);
    insertionSort(test, n);
    show(test, n);
}

void insertionSort(int *arr, int n)
{
    int i, j, flag;
    for(i = 1; i < n; ++i)
    {
        flag = arr[i];
        for(j = 0; j < i; ++j)
        {
            if(flag > arr[i-j-1])
            {
                arr[i-j] = arr[i-j-1];
            } else
            {
                break;
            }
        }
        arr[i-j] = flag;
    }
}

void show(int *arr, int n)
{
    int i;
    for(i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
