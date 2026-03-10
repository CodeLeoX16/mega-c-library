#include <stdio.h>
#include "vector.h"
#include "sort.h"

int main()
{
    Vector v;

    vector_init(&v);

    vector_push(&v, 30);
    vector_push(&v, 10);
    vector_push(&v, 20);

    printf("Vector elements:\n");

    for(int i = 0; i < v.size; i++)
    {
        printf("%d ", vector_get(&v, i));
    }

    printf("\n");

    int arr[5] = {5,2,9,1,3};

    bubble_sort(arr,5);

    printf("Sorted array:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    vector_free(&v);

    return 0;
}