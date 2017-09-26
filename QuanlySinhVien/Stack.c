#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

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

bool isStackEmpty(Stack* s) {
    return (s->top == -1);
}

bool isStackFull(Stack* s) {
    return (s->top == s->capacity -1);
}

bool push(Stack* s, Student data) {
    if (isStackFull(s)) {
        printf("Stack is over flow\n");
        return false;
    } else {
        s->array[++s->top] = data;
        return true;
    }
}


bool pop(Stack*s, Student* data) {
    if (isStackEmpty(s)) {
        printf("Stack is empty");
        return false;
    } else {
        *data = s->array[s->top--];
        return true;
    }
}

void deleteStack(Stack*s) {
    if (s) {
        if (s->array) {
            free(s->array);
        }
        free(s);
    }
}
