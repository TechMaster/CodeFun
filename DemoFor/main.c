#include <stdio.h>

int main() {
    /*
     for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
        if (i > 5) {
            break;
            //continue;
        }

    } */

    /* sử dụng điều kiện trong vòng lặp
    for (int i = 0; i < 100; i++) {
       // if ((i < 50 || i > 70) && i % 2 == 0) {
       //     printf("%d\n", i);
       // }

        if (i >= 50 && i <= 70) continue;

        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    */
    /*
    int row, column, N;

    scanf("%d", &N);

    //vẽ 1 nửa tam giác phía trên

    for (row = 1; row <= N; row++) {
        for (column = 1; column <= row; column++) {
            printf("*");
        }
        printf("\n");
    }

    //vẽ 1 nửa tam giác phía dưới
    for (row = N - 1; row >= 1; row--) {  //Bỏ qua dòng N
        for (column = row; column >= 1; column--) {
            printf("*");
        }
        printf("\n");
    }*/
    int N;
    scanf("%d", &N);

    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            //printf("*");
            if (col<row) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }


    return 0;
}
