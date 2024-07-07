#include <stdio.h>

int fib(int n)
{
    if(n > 1) return fib(n-1) + fib(n-2);
    else if(n == 1) return 1;
    else if(n == 0) return 0;
    else
    {
        printf("Error: n mst be >= 0\n");
        return -1;
    }
}

int main(void)
{
    long long int num;
    printf("Enter a Number\n");
    scanf("%lld",&num);
    for(long long int i = 0; i < num; i++)
    {
        printf("%d",fib(i));
        if(i != (num-1)) printf(",");
        else printf("\n");
    }
    return 0;
}