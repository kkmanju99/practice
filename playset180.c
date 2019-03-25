#include<stdio.h>
int main()
{
    int N,d=0,b=1,r,m=2;
    scanf("%d",&N);
    while(N)
    {
        r=N%10;
        d=d+r*b;
        N=N/10;
        b=b*2;
    }
    while(d>m)
    {
        m=m*2;
    }
    if(d<m)
    {
        printf("%d",m);
    }
}
