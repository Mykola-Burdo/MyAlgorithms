#include "search_algorithms.h"

int binary_search(int *arr, int size, int key)
{
    int leftBorder = 0;
    int rightBorder = size - 1;

    while (leftBorder <= rightBorder)
    {
        int medianIndex = (leftBorder + rightBorder) / 2;

        if (arr[medianIndex] == key)
        {
            return medianIndex;
        }
        else if (arr[medianIndex] > key)
        {
            rightBorder = medianIndex - 1;
        }
        else
        {
            leftBorder = medianIndex + 1;
        }
    }

    return -1;
}
