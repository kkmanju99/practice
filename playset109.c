#include <stdio.h>

int main()
{
   int N,a[10000],c[10000],s=0,i,j,k=0;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=N-1;i>=0;i--)
   {
    s=s+a[i];
    
    c[k]=s;
    
k++;

}

for(i=N-1;i>=0;i--)
   {
      printf("%d ",c[i]);
   }
   return 0;
}
