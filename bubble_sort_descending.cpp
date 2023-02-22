#include "sorting_algorithms.h"
#include "swap_elements.h"

void bubble_sort_descending(int *arr, int size)
{
    for (int i = 1; i < size; ++i)
    {
        for (int j = 0; j < size - i; ++j)
        {
            if (arr[j] < arr[j + 1])
            {
                swap_elements(arr, j, j + 1);
            }
        }
    }
}
