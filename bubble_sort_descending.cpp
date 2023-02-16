#include "sorting_algorithms.h"

void bubble_sort_descending(int *arr, int size)
{
    for (int i = 1; i < size; ++i)
    {
        for (int j = 0; j < size - i; ++j)
        {
            if (arr[j] < arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
