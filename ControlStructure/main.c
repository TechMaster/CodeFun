#include <stdio.h>
#include <string.h>
int main() {
    printf("Enter your choice\n");
    printf("N. Create new student record\n");
    printf("S. Search student by name\n");
    printf("E. Edit student record\n");
    printf("Q. Quit\n");

    char c;
    while (1) {
        scanf(" %c",&c);
        c = toupper(c);
        switch (c) {
            case 'N':
                printf("You select N\n");
                break;
            case 'S':
                printf("You select S\n");
                break;
            case 'E':
                printf("You select E\n");
                break;
            case 'Q':
                printf("You select Q to quit\n");
                return 1;
        }
    }
    //return 0;
}
