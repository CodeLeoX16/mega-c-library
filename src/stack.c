#include <stdlib.h>
#include "stack.h"

void stack_init(Stack *s)
{
    s->capacity = 10;
    s->top = -1;
    s->data = malloc(sizeof(int)*s->capacity);
}

void stack_push(Stack *s,int value)
{
    if(s->top == s->capacity-1)
    {
        s->capacity *= 2;
        s->data = realloc(s->data,sizeof(int)*s->capacity);
    }

    s->top++;
    s->data[s->top] = value;
}

int stack_pop(Stack *s)
{
    if(s->top == -1)
        return -1;

    int val = s->data[s->top];
    s->top--;
    return val;
}

int stack_peek(Stack *s)
{
    if(s->top == -1)
        return -1;

    return s->data[s->top];
}

void stack_free(Stack *s)
{
    free(s->data);
}