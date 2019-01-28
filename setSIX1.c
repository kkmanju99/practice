#include <stdio.h>

    int main()
{
    int a,i,r,k=0,b[100];
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        b[k]=r;
        k++;
        a=a/10;
    }
    for(i=k-1;i>=0;i--)
    {
        printf("%d ",b[i]);
    }


    return 0;
}
