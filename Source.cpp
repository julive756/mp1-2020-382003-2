#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "malloc.h"
#define SIZE 17


void InsertionSort(int n, int A[])
{
    int newElement, location;

    for (int i = 1; i < n; i++)
    {
        newElement = A[i];
        location = i - 1;
        while (location >= 0 && A[location] > newElement)
        {
            A[location + 1] = A[location];
            location = location - 1;
        }
        A[location + 1] = newElement;
    }
}

int main()
{  
  
    int a[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        a[i] = (rand() % 100);
        printf("%d ", a[i]);
    }
    InsertionSort(SIZE, a);


    printf("\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", a[i]);
    printf("\n");
    //освобождение памяти
    return 0;
}