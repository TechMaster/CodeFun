#include <stdio.h>

#define BUZZ_SIZE 1024

int main(int argc, char **argv)
{
    /* char buff[BUZZ_SIZE];
     FILE *f = fopen("cuong.txt", "r");
     fgets(buff, BUZZ_SIZE, f);
     printf("String read: %s\n", buff);
     fclose(f);*/

    FILE *f = fopen("cuong.txt", "rb");
    fseek(f, 0, SEEK_END);
    long fsize = ftell(f);
    fseek(f, 0, SEEK_SET);  //same as rewind(f);

    char *string = malloc(fsize + 1);
    fread(string, fsize, 1, f);
    fclose(f);

    string[fsize] = 0;
    return 0;
}
