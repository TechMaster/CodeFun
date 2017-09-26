#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "BigNum.h"

char* addBigNumber(char* n1, char* n2)
{
    Stack* result = createStack(100);
    int top1 = strlen(n1); // Stack counter for string n1
    int top2 = strlen(n2); // Stack counter for string n2
    int carry = 0;

    while (top1 > 0 || top2 > 0)
    {
        top1 = top1 - 1;
        top2 = top2 - 1;
        int v1 = 0, v2 = 0;
        if (top1 >= 0)
        {
            v1 = n1[top1] - '0';
        }

        if (top2 >= 0)
        {
            v2 = n2[top2] - '0';
        }
        int temp = v1 + v2 + carry; //tổng của 2 chữ số đồng hạng hệ số

        carry = temp / 10; //nếu tổng hơn 10 thì nhớ sang cột bên cạnh
        temp = temp % 10;

        push(result, temp); //chồng kết quả lên stack

    }

    char *string = malloc(result->top * sizeof(char));
    int i = 0;
    while (!isStackEmpty(result))
    {
        int a;
        pop(result, &a);
        string[i] = a + '0';
        i++;
    }
    string[i] = 0;  //Add terminated character
    deleteStack(result);
    return string;

}


char * addBigNumber2(char* n1, char* n2) {
    const int k = 200;
    char result[k];

    result[k-1] = 0; //terminated character

    int count = 0;

    int top1 = strlen(n1); // Stack counter for string n1
    int top2 = strlen(n2); // Stack counter for string n2
    int carry = 0;

    while (top1 > 0 || top2 > 0)
    {
        top1 = top1 - 1;
        top2 = top2 - 1;
        char v1 = 0, v2 = 0;
        if (top1 >= 0)
        {
            v1 = n1[top1] - '0';
        }

        if (top2 >= 0)
        {
            v2 = n2[top2] - '0';
        }
        char temp = v1 + v2 + carry; //tổng của 2 chữ số đồng hạng hệ số

        carry = temp / 10; //nếu tổng hơn 10 thì nhớ sang cột bên cạnh
        temp = temp % 10;

        count++;
        result[k - count -1] = temp + '0';
    }
    count = count + 1;//add 1 for last terminated character

    char *string = malloc(count * sizeof(char));
    memset(string, 0, count);
    strcpy(string, &result[k - count]);
    return string;
}
