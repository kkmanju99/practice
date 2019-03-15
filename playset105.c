#include <stdio.h>

int main()
{
   int N,a1[100],i,j,m;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a1[i]);
   }
    for(i=0;i<N;i++)
   {   
   for(j=i+1;j<N;j++)
   {         
         if(a1[i]>a1[j])
         {
             
         m=a1[i];
         a1[i]=a1[j];
         a1[j]=m;
   }   
   }   
   }
   for(i=N-1;i>=0;i--)
   {
    printf("%d ",i+1);
   }
    return 0;
}
