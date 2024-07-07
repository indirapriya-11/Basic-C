#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char string[]);

int main(void)
{
    char string1[] = "not a palindrome!";
    char string2[] = "abcddddxcba";
    char string3[] = "abcdcba";

   printf("%d\n",is_palindrome(string1));
    printf("%d\n",is_palindrome(string2));
    printf("%d\n",is_palindrome(string3));


    return 0;
}

bool is_palindrome(char string[])
{
    int middle = strlen(string) / 2;
    int length = strlen(string);
    for (int i = 0; i < middle; i++)
    {
        if(string[i] != string[length -i -1])
        return false;

    }

    return true;
}