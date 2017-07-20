#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char Z[20];
	//scanf("%s", Z);
	gets(Z);
	printf("len = %d\n", strlen(Z));
	
	char X[20];
	int length = strlen(Z);
	int i;
	for (i = 0; i < length; i++) {
		X[i] = Z[length - i - 1];
	}
	X[length]= 0;  //Remove this to see what happens?
	printf("%s\n", X);
	return 0;
}
