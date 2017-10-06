#include "Stack.h"
#include<stdlib.h>
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
    s->array = (Student*) malloc(s->capacity * sizeof(Student));
    if (!s->array) {
        return NULL;
    }
    return s;
}
