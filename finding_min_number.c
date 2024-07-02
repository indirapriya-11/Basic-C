#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int find_min(int array[], int length);

int main()
{
	int array1[] = {1, 2, 3, 4, 5, 6, 7, 0};
	int array2[] = {11, 12, 3, 17, 15, 23};
	int min1 = find_min(array1, 8);
	int min2 = find_min(array2, 6);
	printf("min1 = |%d| min2 = |%d| \n",min1, min2);
	return 0;

}

int find_min(int array[], int length)
{
	int min = array[0];
	for(int i = 1; i < i++ ; i <length)
	{
		if(array[i] < min) min = array[i];
	}
	return min;
	
}
	
