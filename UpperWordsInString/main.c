#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char* upperString(const char* string);

int main()
{
    printf("Hay nhap vao mot chuoi\n");
    char string[255];
    gets(string);

    char* result = upperString(string);

    printf("%s\n", result);

    free(result);
    return 0;
}

char* upperString(const char* string) {

	char* temp = malloc((strlen(string) + 1) * sizeof(char));
	temp[strlen(string)]= 0; //Terminated character 0


	if (string[0] != ' ') {
		temp[0] = toupper(string[0]);
	} else {
		temp[0] = string[0];
	}

	int i = 1;
	while (i < strlen(string)) {
		if (string[i-1] == ' ') {
			temp[i] = toupper(string[i]);
		} else {
			temp[i] = string[i];
		}
		i++;
	}
	return temp;
}
