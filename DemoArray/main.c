#include <stdio.h>
#include <stdlib.h>

void daoMang() {
	int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};  //Mang co kich thuoc co dinh
    int N = sizeof(arr)/sizeof(arr[0]);

    //printf("size of one elem")

    for (int i = 0; i <= N/2; i++) {
			int temp = arr[i];
			arr[i] = arr[N - 1 - i];
			arr[N - 1 - i] = temp;
    }

    for (int i = 0; i < N; i++) {
			printf("%d\n", arr[i]);
    }
}

/*
Tao mot vong lap, nhap vao mot chuoi, chuyen no sang so tu nhien, sau do gan vao mot mang
Neu chuoi nhap vao khong chuyen doi sang so tu nhien duoc thi bo qua
khi nao nguoi dung go ky 'q' ket thuc viec nhap, va tien hanh dao mang
co the dung atoi hoac strol
http://en.cppreference.com/w/c/string/byte/strtol
*/
void daoMang2() {
	char inputText[8];

	while (1) {
			gets(inputText);
			if (inputText[0] == 'q') break;
			int i = atoi (inputText);
			printf("%d\n", i);
	}

}

int main()
{
    //daoMang();
    daoMang2();
    return 0;
}
