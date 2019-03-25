#include<stdio.h>
void main()
{
    int N,d=0,b=1,r,m1=2;
    scanf("%d",&N);
    while(N)
    {
        r=N%10;
        d=d+r*b;
        N=N/10;
        b=b*2;
    }
    while(d>m1)
    {
        m1=m1*2;
    }
    if(d<m1)
    {
        printf("%d",m1);
    }
}
