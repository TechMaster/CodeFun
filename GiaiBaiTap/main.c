#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//001
void soGapDoi()
{
    int N;
    scanf("%d", &N);
    printf("%d * 2 = %d", N, N * 2);
}

//002
void phepTinh1()
{

}

void kiemTraSoChinhPhuong()
{
    int N;

    while (true)
    {
        printf("Nhap vao mot so de kiem tra. Nhap 0 de thoat\n");
        scanf("%d", &N);
        if (N == 0) return;
        bool laSoChinhPhuong = false;  //De dung duoc kieu Boolean, phai dung C99 va #include <stdbool.h>
        for (int i = 1; i <= N/2; i++)
        {
            if (N == i * i)
            {
                laSoChinhPhuong = true;
                break;
            }
        }

        if (laSoChinhPhuong)
        {
            printf("%d la so chinh phuong\n\n", N);
        }
        else
        {
            printf("%d khong phai la so chinh phuong\n\n", N);
        }
    }

}


/*
hello world 2
chao cac ban 3

*/

void nhapMotChuoiDemSoTu() {
    char chuoi[255];
    printf("Nhap vao mot chuoi\n");
    gets(chuoi);
   // printf("%s", &chuoi[5]);
    printf("%d\n", strlen(chuoi));

    for (int i= strlen(chuoi); i>=0 ;i--) {
        printf("%c\n", chuoi[i]);
    }
}

int main()
{
    //soGapDoi();
    //kiemTraSoChinhPhuong();
    nhapMotChuoiDemSoTu();
    return 0;
}
