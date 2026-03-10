#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

/*
    Initialize vector
*/
void vector_init(Vector *v)
{
    v->size = 0;
    v->capacity = 4;
    v->data = (int *)malloc(sizeof(int) * v->capacity);

    if(v->data == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
}

/*
    Add element to vector
*/
void vector_push(Vector *v, int value)
{
    if(v->size >= v->capacity)
    {
        v->capacity *= 2;

        int *new_data = realloc(v->data, sizeof(int) * v->capacity);

        if(new_data == NULL)
        {
            printf("Reallocation failed\n");
            exit(1);
        }

        v->data = new_data;
    }

    v->data[v->size] = value;
    v->size++;
}

/*
    Remove last element
*/
void vector_pop(Vector *v)
{
    if(v->size > 0)
    {
        v->size--;
    }
}

/*
    Get element by index
*/
int vector_get(Vector *v, int index)
{
    if(index < 0 || index >= v->size)
    {
        printf("Index out of bounds\n");
        return -1;
    }

    return v->data[index];
}

/*
    Free allocated memory
*/
void vector_free(Vector *v)
{
    free(v->data);
}