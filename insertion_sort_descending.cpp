#include "sorting_algorithms.h"

void insertion_sort_descending(int *arr, int size)
{
    for(int i = 1; i < size; ++i)
    {
        int j;
        int tmp = arr[i];
        for(j = i - 1; j >= 0 && arr[j] < tmp; --j)
        {
            arr[j + 1] = arr[j];
        }

        arr[j + 1] = tmp;
    }
}
