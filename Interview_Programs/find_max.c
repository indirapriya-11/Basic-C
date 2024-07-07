#include<stdio.h>

int find_max(int array[], int length)
{
    int max = array[0];
    for(int i = 1; i < length; i++)
    {
        if(array[i] > max) max = array[i];
    }
    return max;
}
int main()
{
    int array1[] = {11,12,0,12,13,76,23};
    int array2[] = {12, 13, 14, 12, 17, 15, 19, 34, 2};

    int max1 = find_max(array1, 7);
    int max2 = find_max(array2, 9);
    printf("max1 = %d  max2 = %d \n", max1,max2);
    return 0;
}