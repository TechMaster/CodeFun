#include <stdio.h>
#include <stdlib.h>

void swap1(int a, int b);
void swap2(int *a, int *b);

int main()
{
    printf("Demo Pointer\n");

    int number = 10;
    int* pNumber = &number;
		printf("%d\n", number);
		printf("%d\n", *pNumber);
		printf("size of pointer %d\n", sizeof(pNumber));
		printf("size of integer %d\n", sizeof(number));

		double bigNum = 3.14158;
		double* pDouble = &bigNum;


		printf("size of double %d\n", sizeof(bigNum));

		printf("size of pointer to double %d\n", sizeof(pDouble));

		int a = 5, b = 7;
		swap1(a, b);
		printf("a = %d, b = %d\n", a, b);

		swap2(&a, &b);
		printf("a = %d, b = %d\n", a, b);
    return 0;
}

void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

