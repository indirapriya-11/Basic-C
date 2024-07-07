#include <stdio.h>
int main(void)
{
    double C = 0;
    double F = 0;

    printf("Enter the Temperature in Celsius\n");
    fflush(stdout);
    if(scanf("%lf",&C) != 1)
    {
        printf("Error reading input. \n");
        return 1;
    }

    F = (C * 1.8) + 32;

    printf("C: %.2lf -> F: %.2lf \n", C,F);

    return 0;
}