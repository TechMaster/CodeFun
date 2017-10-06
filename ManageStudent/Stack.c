#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>
/*
Tao ra stack cua Student, voi tham so vao la capacity
*/
Stack* createStack(int capacity) {
    Stack* s = malloc(sizeof(Stack));
    if (!s) {
        return NULL;
    }

    s->capacity = capacity;
    s->top = -1;
    s->array = (Student**) malloc(s->capacity * sizeof(Student*));
    if (!s->array) {
        return NULL;
    }
    return s;
}

BOOL isStackEmpty(Stack* s) {
    return (s->top == -1);
}

BOOL isStackFull(Stack* s) {
    return (s->top == s->capacity -1);
}

BOOL push(Stack* s, Student *student) {
    if (isStackFull(s)) {
        printf("Stack is over flow\n");
        return false;
    } else {
        s->array[++s->top] = student;
        return true;
    }
}
