#include<stdio.h>
int main()
{
    long int a,b,c,ans1,s=1,i;
    scanf("%ld %ld %ld",&a,&b,&c);
    for(i=1;i<=b;i++)
    s*=a;
    ans1=s%c;
    printf("%ld",ans1);
    return 0;
 }
