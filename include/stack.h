#ifndef STACK_H
#define STACK_H

typedef struct
{
    int *data;
    int top;
    int capacity;
} Stack;

void stack_init(Stack *s);
void stack_push(Stack *s,int value);
int stack_pop(Stack *s);
int stack_peek(Stack *s);
void stack_free(Stack *s);

#endif