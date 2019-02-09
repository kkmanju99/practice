#include <stdio.h>

int main()
{
    int n, sum = 0,rem;

    /* Input number from user */
    scanf("%d", &n);
    if(n%2==0)
    {
        n=n-2;
    }
    else
    {
        n=n-1;
    }
    printf("%d",n);

    return 0;
}
