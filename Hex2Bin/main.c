#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *hex2Bin(char* hex);
char *aHex2Bin(char aHex);

int main()
{
		char hex[] =  "A5C";
		/*char* result = hex2Bin(hex);
		printf("%s", result);
		free(result);*/

		printf("%s", hex2Bin(hex));
    return 0;
}


char* hex2Bin(char* hex)
{
	int len = strlen(hex);
	char* result = (char*)malloc(255 * sizeof(char));;
	memset(result, 0, sizeof result);

	for (int i = 0; i< len; i++) {
		strcat(result, aHex2Bin(hex[i]));
	}
	return result;
}

char *aHex2Bin(char aHex)
{
    switch (aHex)
    {
    case '0':
        return "0000";
    case '1':
        return "0001";
    case '2':
        return "0010";
    case '3':
        return "0011";
    case '4':
        return "0100";
    case '5':
        return "0101";
		case '6':
				return "0110";
		case '7':
				return "0111";
		case '8':
				return "1000";
		case '9':
				return "1001";
		case 'A':
        return "1010";
    case 'B':
        return "1011";
    case 'C':
        return "1100";
    case 'D':
        return "1101";
    case 'E':
        return "1110";
    case 'F':
				return "1111";
		default:
				return "xxxx";
    }
}
