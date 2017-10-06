#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include "student.h"

typedef struct{
    int top;
    int capacity;
    Student **array; //Mang chua cac con tro tro den Student
} Stack;

Stack* createStack(int capacity);
BOOL isStackEmpty(Stack* s);
BOOL isStackFull(Stack* s);
BOOL push(Stack* s, Student *student);

#endif // STACK_H_INCLUDED
