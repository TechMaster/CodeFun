#include <stdio.h>
#include <stdlib.h>

void daoMang() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};  //Mang co kich thuoc co dinh
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
	int arr[100];
	int N = 0;
	char inputText[8];
	//Nhap chuoi, chuyen doi sang so, neu chuyen doi thanh cong thi them vao mang arr
	while (1) {
			gets(inputText);
			if (inputText[0] == 'q') break;
			char * temp;
			int _val = strtol(inputText, &temp, 10);
			if (temp[0] == 0) { //convert successfully
        arr[N] = _val;
        N++;
        if (N == sizeof(arr) / sizeof(arr[0])) {
          break;
        }
			}
	}

	//Dao mang
	for (int i = 0; i <= N/2; i++) {
			int temp = arr[i];
			arr[i] = arr[N - 1 - i];
			arr[N - 1 - i] = temp;
	}

	//In ra ket qua
	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}

}
/*
sourceArray = [1, 2, 3];
appendArray = [4, 5];
k = 3
sourceArray = [1, 2, 3, 4, 5];
*/

void insertArray(int sourceArray[], int appendArray[], int k) {
	sourceArray[0] = 100;
	sourceArray[5] = 1000;
}

void deleteArray(int sourceArray[], int deletePosition) {
	//int N =

}
void demoInsertArray() {
	int sourceArray[100] = {1, 2, 3};
	int appendArray[] = {4, 5, 6};
	insertArray(sourceArray, appendArray, 3);
	printf("%d\n", sourceArray[0]);
	printf("%d\n", sourceArray[5]);
}

int main()
{
    //daoMang();
    //daoMang2();
    demoInsertArray();
    return 0;
}
