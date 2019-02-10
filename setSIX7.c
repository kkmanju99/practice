#include <stdio.h>

int main()
{
    int a[100],n,k,m=0,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==k)
        {
            m++;
    }
    }
    printf("%d",m);
    
    return 0;
}
