#include <stdio.h>

int main(void)
{
    int array1[] = {11,12,0,12,13,76,23};
    int length = sizeof(array1)/sizeof(array1[0]);
    int temp = 0;
    for(int i = 0 ; i < length; i++)
    {
        printf("%d\t",array1[i]);
    }
    printf("\n");
    for(int i = 0; i < (length / 2); i++)
    {
        temp = array1[i];
        array1[i] = array1[length -i -1];
        array1[length -i - 1] = temp;
    }
    for(int i = 0 ; i < length; i++)
    {
        printf("%d\t",array1[i]);
    }
    printf("\n");
    
    return 0;

}