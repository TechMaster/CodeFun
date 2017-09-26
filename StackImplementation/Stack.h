#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdbool.h>
typedef struct {
    int top;
    int capacity;
    int *array;
} Stack;


Stack* createStack(int capacity);

bool isStackEmpty(Stack* s);

bool push(Stack* s, int data);

bool pop(Stack*s, int* data);

void deleteStack(Stack*s);
#endif // STACK_H_INCLUDED
