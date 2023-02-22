#include "sorting_algorithms.h"
#include "swap_elements.h"

void cocktail_sort_ascending(int *arr, int size)
{
    int leftBorder = 1;
    int rightBorder = size - 1;

    while (leftBorder <= rightBorder)
    {
        for (int i = rightBorder; i >= leftBorder; --i)
        {
            if (arr[i] < arr[i - 1])
            {
                swap_elements(arr, i, i - 1);
            }
        }

        for (int i = leftBorder; i <= rightBorder; ++i)
        {
            if (arr[i] < arr[i - 1])
            {
                swap_elements(arr, i, i - 1);
            }
        }

        leftBorder++;
        rightBorder--;
    }
}
