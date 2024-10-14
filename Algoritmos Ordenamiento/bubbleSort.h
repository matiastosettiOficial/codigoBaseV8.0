#ifndef BUBBLESORT_H_
#define BUBBLESORT_H_

#include <iostream>
using namespace std;


void bubbleSort(int *arr, int size) {
    int aux;
    bool seguir = true;

    for (int i = 0; i < size - 1 && seguir; i++) {
        seguir = false;
        for (int j = 0; j < size - i - 1; j++) // porque va al fondo, ya esta en el lugar que le corresponde
        {
            if (arr[j] > arr[j + 1]) {
                seguir = true;
                aux = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = aux;
            }
        }
    }
}

#endif // BUBBLESORT_H_
