#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "student.h"
#include "Stack.h"

int main() {
    printf("Enter your choice\n");
    printf("N. Create new student record\n");
    printf("S. Search student by name\n");
    printf("E. Edit student record\n");
    printf("P. Print all student records\n");
    printf("Q. Quit\n");

    Stack* stack = createStack(40);
    char c, d;
    while (1) {
        scanf(" %c ",&c);
        c = toupper(c);

        //scanf("%c",&d);  //Skip new line

        switch (c) {
            case 'N': {
                Student* student = createNewStudentFromConsole();
                push(stack, student);
                break;
            }
            case 'S':
                printf("You select S\n");
                break;
            case 'E':
                printf("You select E\n");
                break;
            case 'P':
                printf("Print all students\n");
                break;
            case 'Q':
                printf("You select Q to quit\n");
                return 1;
        }
    }
    //return 0;
}
