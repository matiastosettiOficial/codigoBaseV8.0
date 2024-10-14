#ifndef INSERTSORT_H_
#define INSERTSORT_H_

#include <iostream>
using namespace std;

void insertSort(int *arr, int size)
{
    int marcador, aux;

    for (int i = 0; i < size; i++)
    {

        marcador = i;
        aux = arr[i];

        while (marcador > 0 && aux < arr[marcador - 1])
        {
            arr[marcador] = arr[marcador - 1];
            marcador--;
        }
        arr[marcador] = aux;
    }
}


#endif // INSERTSORT_H_
