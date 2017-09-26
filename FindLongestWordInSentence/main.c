#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* findLongestWord(const char *str);

int main()
{
    char str1[] = "  hello World.I am Cuong,this is my dog.How are you? .";
    char str2[] ="I say Hello Worlds.";
    char str3[] ="I say Hello,Hell.";

		printf("%s", findLongestWord(str3));
    return 0;
}
int isSeparateChar(char c)
{
    char separateChars[] = " ,.:;!?[]{}()";
    for (int i = 0; i < strlen(separateChars); i++)
    {
        if (separateChars[i] == c)
        {
            return 1;
        }
    }
    return 0; //Not separate character

}

char* findLongestWord(const char *str)
{
    int maxLength = 0;
    int leftWord = 0;
    int rightWord = 0;
    int leftOfLongestWord = 0;


    for (int i = 0; i < strlen(str); i++)
    {
        //Check if str[i] is the first character of word
        if (
            (i == 0 && !isSeparateChar(str[i])) ||
            (isSeparateChar(str[i-1]) && !isSeparateChar(str[i]))
        )
        {
            leftWord = i;
        }

        //Check if str[i] is the last character of word
        if (
            !isSeparateChar(str[i]) &&
            (isSeparateChar(str[i+1]) ||str[i+1] == 0)
        )
        {
						rightWord = i+1;
        }

        if (rightWord - leftWord > maxLength) {
					maxLength = rightWord - leftWord;
					leftOfLongestWord = leftWord;
        }
    }

    char* longestWord = malloc(maxLength * sizeof(char));
    for (int i = 0; i < maxLength; i++) {
      longestWord[i] = str[leftOfLongestWord + i];
    }

    return longestWord;
}
