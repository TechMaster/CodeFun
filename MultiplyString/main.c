#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* mulString(char *s, int n) {
	char * result = malloc(strlen(s) * n * sizeof(char));

	for (int i = 0; i < n; i++) {
		strcpy(&result[i * n], s);
	}

	return result;
}
int main()
{
		//printf("%s\n", mulString("abE", 3));

		char *s = mulString("abE", 3);
		printf("%s\n", s);
		free(s);
    return 0;
}
