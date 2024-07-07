#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int myarray[] = {1, 5, 5, 5, 5, 5, 5, 1, 2, 5, 2, 8, 11, 5, 12, 13, 14};
    int count = 0;
    int to_find = 5;
    int length = sizeof(myarray) / sizeof(myarray[0]);

    for (int i = 0; i < length; i++)
    {
        if (myarray[i] == to_find)
        {
           count++;

        }
    }

    printf("Number of 5's = %d\n", count);
    return 0;
}
