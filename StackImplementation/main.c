#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include "Cuong.h"
#include "BigNum.h"

int main() {
	  /*printf("pi = %f\n", PI);
    Stack* s = createStack(5);
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
    deleteStack(s);*/
    char* result = addBigNumber2("11", "23");
    printf("%s\n", result);
    free(result);
    return 0;
}
