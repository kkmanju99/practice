#include <stdio.h>

int main()
{
    int n,m,ans;
    scanf("%d%d",&n,&m);
    ans=n+m;
    if(ans%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
