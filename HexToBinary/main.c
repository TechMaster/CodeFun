#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* aHexToBinary(char aHex);
char* hexToBinary(char* hex);

int main() {
	char *hex = "23";
	char *binary = hexToBinary(hex);
	printf("%s", binary);
	return 0;
}

char* hexToBinary(char* hex) {
	char *binary = malloc(255 * sizeof(char *));
	memset(binary, 0, 255);


	for (int i = 0; i < strlen(hex); i++) {
		char* fourBits = aHexToBinary(hex[i]);
		strcat(binary, fourBits);
	}

	return binary;
}


char* aHexToBinary(char aHex) {
	switch (aHex) {
		case '0': return "0000";
		case '1': return "0001";
		case '2': return "0010";
		case '3': return "0011";
		case '4': return "0100";
		case '5': return "0101";
		case '6': return "0110";
		case '7': return "0111";
		case '8': return "1000";
		case '9': return "1001";
		case 'A': return "1010";
		case 'B': return "1011";
		case 'C': return "1100";
		case 'D': return "1101";
		case 'E': return "1110";
		case 'F': return "1111";
		default: return "0000";
	}
}
