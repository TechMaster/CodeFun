#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	scanf("%c", &c);
	printf("%c", tolower(c));
	return 0;
}
