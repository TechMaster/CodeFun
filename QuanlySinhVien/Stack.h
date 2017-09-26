#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdbool.h>
#include "Student.h"

typedef struct {
    int top;
    int capacity;
    Student *array;
} Stack;


Stack* createStack(int capacity);

bool isStackEmpty(Stack* s);

bool push(Stack* s, Student data);

bool pop(Stack*s, Student* data);

void deleteStack(Stack*s);

#endif // STACK_H_INCLUDED
