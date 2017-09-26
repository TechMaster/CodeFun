#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int checkHopQuy(char* string);

int main()
{
    char string1[] = "a[b]c";
    char string2[] = "} abc {";
    char string3[] = "<ok string [good]>";
    char string4[] = "DEF ]<>";
    char string5[] = "Open but not close (///";
    char string6[] = "a[b[c<def>m{n]pq}]()";

    //printf("string1: %d\n", checkHopQuy(string1));
    //printf("string2: %d\n", checkHopQuy(string2));
    //printf("string3: %d\n", checkHopQuy(string3));
    //printf("string4: %d\n", checkHopQuy(string4));
    printf("string6: %d\n", checkHopQuy(string6));
    return 0;
}
/*

*/
int isCharIsParenthese (char c)
{
    char *parentheses = "[]<>(){}";
    for (int i = 0; i < strlen(parentheses); i++)
    {
        if (c == parentheses[i])
        {
            return 1;
        }
    }

    return 0;
}

/*
char a left size character
char b right size character
return 1 if a matches b else return 0
*/

int isTwoCharsMatching(char a, char b)
{
    if (
        (a == '[' && b == ']') ||
        (a == '<' && b == '>') ||
        (a == '{' && b == '}') ||
        (a == '(' && b == ')')
    )
    {
        return 1;
    }
    return 0;
}

int checkHopQuy(char* string)
{
    char* stack = malloc(100* sizeof(char));
    memset(stack, 0, 100);
    int k = 0; //k is stack counter

    for (int i = 0; i < strlen(string); i++)
    {
        if (isCharIsParenthese(string[i]))
        {
            if (k > 0 && isTwoCharsMatching(stack[k-1], string[i]))
            {
                k = k - 1;
            }
            else
            {
                stack[k] = string[i];
                k = k + 1;
            }
        }
    }

    free(stack);
    if (k > 0)
    {
        return 0;  //stack is not empty
    }
    else
    {
        return 1;
    }

}
