#include <stdio.h>
#include<math.h>

int main()
{
   int n,a[100000],i,m=0,j,c;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   
      for(i=0;i<n;i++)
   {
       
      for(j=i+1;j<n;j++)
   {
          
    c=abs(a[i]-a[j]);
  
if(m<c)
 m=c;
       
   }
   }
    printf("%d",m);
    return 0;
}
