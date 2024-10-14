#ifndef SHELLSORT_H_
#define SHELLSORT_H_

#include <iostream>
using namespace std;

void shellSort(int *arr, int size)
{
    for (int gap = size / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < size; i += 1)
        {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
}

#endif // SHELLSORT_H_
