#include <stdio.h>

int main()
{
   int N1,a[100],s=0,i;
   scanf("%d",&N1);
   for(i=0;i<N1;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<N1-1;i++)
   {
   s=s+a[i]+a[i+1];
   
   }
   printf("%d ",s);
}
