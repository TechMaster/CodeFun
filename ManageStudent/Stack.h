#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include "student.h"

typedef struct{
    int top;
    int capacity;
    Student *array;
} Stack;


#endif // STACK_H_INCLUDED
