#include<stdio.h>
int main()
{
    int a,b,f=1,g1,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    a=f;
    f=1;
    for(i=1;i<=b;i++)
    {
        f=f*i;
    }
    b=f;
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            g1=i;
        }
    }
    printf("%d",g1);
    
    return 0;
}
