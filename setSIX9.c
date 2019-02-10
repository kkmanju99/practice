#include <stdio.h>

int main()
{
    int n,r,c=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        c++;
    }
    printf("%d",c);
    return 0;
}
