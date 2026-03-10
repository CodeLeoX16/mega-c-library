#ifndef VECTOR_H
#define VECTOR_H

/*
    Simple dynamic array implementation
*/

typedef struct
{
    int *data;
    int size;
    int capacity;
} Vector;

/* initialization */
void vector_init(Vector *v);

/* insert element */
void vector_push(Vector *v, int value);

/* remove last element */
void vector_pop(Vector *v);

/* access element */
int vector_get(Vector *v, int index);

/* free memory */
void vector_free(Vector *v);

#endif