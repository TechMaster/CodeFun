#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    char hexString[8];
    gets(hexString);


    int len = strlen(hexString);
    int result = 0;

    for (int i = len-1; i >= 0; i--)
    {
        char a = hexString[i];
        int b;
        if (a >= '0' && a <= '9')
        {
            int b = a - 48;
            result += b * pow(16, len-1-i);
        }
        else if (a >= 'A' && a <= 'F')
        {
            int b = a - 55;
            result += b * pow(16, len-1-i);
        }
        else
        {
            printf("Invalid character %c", a);
            break;
        }
    }

    printf("Result %d", result);


    return 0;
}


int hexCharToDec(char hexChar)
{
    /*if (hexChar == "0") {
    	return 0;
    } else if (hexChar == "1") {
    	return 1;
    }*/

    switch (hexChar)
    {
    case '0':
        return 0;
    case '1':
        return 1;

    case 'A':
        return 10;
    case 'a':
        return 10;
    }


}
