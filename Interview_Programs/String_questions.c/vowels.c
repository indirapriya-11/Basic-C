#include <string.h>
#include <stdio.h>
#include <ctype.h>

int vowel_count(char *s);

int main(void)
{
    char str1[] = "I want to earn hundered crores per year";
    int count_Str = vowel_count(str1);
    printf("Vowles count in string1 = %d\n",count_Str);
    return 0;
}

int vowel_count(char *s)
{
    int count = 0;
    for(int i = 0 ; i < strlen(s); i++)
        {
        switch(toupper(s[i]))
        {
            case 'A' :
            case 'E' :
            case 'I' :
            case 'O' :
            case 'U' :
                count++;
        }
    }
    return count;
}
