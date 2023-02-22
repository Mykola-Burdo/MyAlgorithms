#include "sorting_algorithms.h"
#include "swap_elements.h"

void selection_sort_ascending(int *arr, int size)
{
    for(int i = 0; i < size - 1; ++i)
    {
        int minIndex = i;
        for(int j = i + 1; j < size; ++j)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        if(i != minIndex)
        {
            swap_elements(arr, i, minIndex);
        }
    }
}
