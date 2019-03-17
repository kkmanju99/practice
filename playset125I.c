#include <stdio.h>

int main()
{
int N1,a[100],i,j,c=0,x;
scanf("%d",&N1);
for(i=0;i<N1;i++)
{
    scanf("%d",&a[i]);
}
  
  
 
  
for(i=1;i<=N1;i++)
{
    c=0;
    for(j=0;j<N1;j++)
    {
        
        if(a[j]%i==0)
        {
           c++;
        }
      
    }
    
    if(c==N1)
    {
    x=i;
   
    }
}
  
  
  
  printf("%d",x);
  
    return 0;
}
