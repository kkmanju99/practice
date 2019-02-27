#include <stdio.h>
int main()
{
    int a1[100000],N,i,c;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(i=0;i<N;i++)
    {
        if(a1[i]==0)
        {
            c=i;
        }
    }
    for(i=0;i<c;i++)
    {
        if(a1[i]!=0)
        {
        printf("%d ",a1[i]);
        }
    }

}
