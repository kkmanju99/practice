#include <stdio.h>
#include<math.h>

int main()
{
   int N,a[100000],i,k=1,j,c;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   
      for(i=0;i<N;i++)
   {
       
      for(j=i+1;j<N;j++)
   {
      if(a[i]>a[j]||a[i]<a[j])
      {
    c=abs(a[i]-a[j]);
  
if(k>c)
 k=c;
       
   }
   
       
     
   }}
    printf("%d",k);
    return 0;
}
