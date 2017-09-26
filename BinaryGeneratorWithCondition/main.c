#include <stdio.h>
#include <stdlib.h>
void printBinary(int* pArray, int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d", pArray[i]);
        if (i < N-1) printf(", ");
    }
    printf("\n");
}
int main()
{
    printf("Nhap vao chieu dai chuoi nhi phan va toi da chu so 1\n");
    int N; //Length of binary array
    int M; //Max number of 1 elements in array

    scanf("%d %d", &N, &M);
    if (N < 2 || N > 10)
    {
        printf("N can lon hon 2 va nho hon 10\n");
        return -1;
    }

    int *array = malloc(N * sizeof(int));  //Khoi tao dong mang N phan tu kieu integer
    if (array == NULL)
    {
        printf("Khong khoi tao duoc mang %d phan tu", N);
        return -1;
    }

    //Sinh kha nang co gia tri thap nhat
    for (int i = 0; i < N; i++)
    {
        array[i] = 0;
    }

    printBinary(array, N);  //In luon kha nang dau tien

    //Tim chu so 0 dau tien tinh tu phai qua trai
    while (1)
    {
        int k = N-1; //always start from the right most element


        while (k >= 0)  //scan from right to left
        {
            if (array[k] == 1) //encounter element 1
            {
                if (k == 0) {  //all elements are 1 then stop running algorithm
									return 0;
                }
                k = k - 1;     //move left one element

            }
            else  //encounter element 0
            {
                array[k] = 1; //Upgrade from 0 to 1

                //Reset from element k+1 to N-1 to 0
                for (int j = k+1; j <= N-1; j++)
                {
                    array[j] = 0;
                }

                int numberOfOne = 0;
                for (int p = 0; p <= N-1; p++) {
									if (array[p] == 1) {
										numberOfOne++;
									}
                }

                if (numberOfOne <= M) {
									printBinary(array, N);
                }

                break;  //try to remove break to see what happens
            }
        }
    }

    return 0;
}
