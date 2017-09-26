#include <stdio.h>
#include <stdlib.h>
void swap1(int a, int b);
void swap2(int* a, int* b);

int main()

{
    printf("Demo Pointer\n");

    /*double dNumber = 10.659;
		int number = dNumber;


    printf("number = %d\n", number);
    printf("Nhap vao mot so : ");
    scanf("%d", &number);
    printf("number = %d\n", number);

    int* pNumber;
    pNumber = &number;

    printf("pNumber = %d\n", *pNumber);
    printf("Address of number in memory is %d\n", &number);
    printf("Value of pointer pNumber is %d\n", pNumber);
    printf("Address of pNumber in memory is %d\n", &pNumber);*/

		int a = 5, b = 7;
		int *pa = &a;
		/*int temp;
		temp = a;
		a = b;
		b = temp;  */
		/*swap1(a, b);
		printf("a = %d, b = %d\n", a, b);

		swap2(&a, &b);
		printf("a = %d, b = %d\n", a, b);


		printf("size of integer %d\n", sizeof(a));
		printf("size of pointer to integer %d\n", sizeof(pa));

		double pi = 3.14159;
		float fpi = 1.68;
		double *ppi = &pi;
		printf("size of double %d\n", sizeof(pi));
		printf("size of float %d\n", sizeof(fpi));
		printf("size of pointer to double %d\n", sizeof(ppi));*/

		int array[] = {1, 2, 3, 4, 9, 8, 6};
		int* parray = &array[3];
		printf("Gia tri pa tro den %d\n", *parray);
		printf("Gia tri parray tro den thu 3 la %d\n", parray[2]);
		printf("Dia chi vung nho array tro den %d\n", array);
		printf("Gia tri phan tu dau tien array tro den %d\n", array[0]);

    return 0;
}
void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}


