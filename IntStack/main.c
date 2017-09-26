#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Stack {
    int top;
    int capacity;
    int *array;
};

struct Stack* createStack(int capacity) {
    struct Stack* s = malloc(sizeof(struct Stack));
    if (!s) {
        return NULL;
    }

    s->capacity = capacity;
    s->top = -1;
    s->array = (int*) malloc(s->capacity * sizeof(int));
    if (!s->array) {
        return NULL;
    }
    return s;
}

bool isStackEmpty(struct Stack* s) {
    return (s->top == -1);
}

bool isStackFull(struct Stack* s) {
    return (s->top == s->capacity -1);
}

bool push(struct Stack* s, int data) {
    if (isStackFull(s)) {
        printf("Stack is over flow\n");
        return false;
    } else {
        s->array[++s->top] = data;
        return true;
    }
}


bool pop(struct Stack*s, int* data) {
    if (isStackEmpty(s)) {
        printf("Stack is empty");
        return false;
    } else {
        *data = s->array[s->top--];
        return true;
    }
}

void deleteStack(struct Stack*s) {
    if (s) {
        if (s->array) {
            free(s->array);
        }
        free(s);
    }
}


int main() {

    struct Stack* s = createStack(5);
    push(s, 10);
    push(s, 12);
    push(s, 15);
    push(s, 2);
    push(s, 3);
    push(s, 5);
    while (!isStackEmpty(s)) {
        int a;
        if (pop(s, &a)) {
            printf("%d\n", a);
        }
    }
    //deleteStack(s);
    return 0;
}
