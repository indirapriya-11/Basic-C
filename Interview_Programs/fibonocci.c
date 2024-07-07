#include <stdio.h>

int main(void)
{
    int term1 = 0, term2 = 1;
    int len,fibn;
    printf("Enter the length of series\n");
    fflush(stdout);
    scanf("%d",&len);
    fflush(stdin);
    if(len < 3)
    {
        printf("Length must be >=3\n");
    }while (len <3);

    printf("\nIterative solution\n");
    printf("%d,%d,",term1,term2);
    for(int i = 2; i < len; i++)
    {
        fibn = term1 + term2;
        term1 = term2;
        term2 = fibn;
        printf("%d",fibn);
        if(i != (len - 1)) printf(",");
        else printf("\n");
    }
    return 0;
}