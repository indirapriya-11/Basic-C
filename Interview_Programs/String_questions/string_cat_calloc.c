// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char * string_append(char * str1, char * str2);
int main() 
{
    char first[5] = "First";
    char second[10] = "Second";
    
    char * s1 = string_append(first, second);
    printf("s : %s\n",s1);
    free(s1);
    return 0;
}
char * string_append(char * str1, char * str2)
{
    int s1_len = strlen(str1);
    int s2_len = strlen(str2);
    int size = s2_len + s1_len + 1;
    char *s = calloc(size,sizeof(char));
    for(int i = 0; i < s1_len; i++)
        s[i] = str1[i];
    for(int i = 0; i < s2_len; i++)
        s[s1_len + i] = str2[i];
    s[size-1] = '\0';
    return s;
}

