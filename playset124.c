#include <stdio.h>

int main()
{
int n,a1[100],i,j,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&a1[i]);
for(i=2;;i++)
{
    c=0;
    for(j=0;j<n;j++)
    {
        
        if(i%a1[j]==0)
        {
           c++;
        }
      
    }
    
    if(c==n)
    {
    printf("%d",i);
    break;
    }
}
return 0;
}
