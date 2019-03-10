#include <stdio.h>
#include<math.h>
int main()
{
   int n,m,a[100000],b[10000],c[100000],i,j,k=0,f;
   scanf("%d %d",&n,&m);
 for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       c[k]=a[i];
       k++;
   }
      for(i=0;i<m;i++)
   {
       scanf("%d",&b[i]);
       c[k]=b[i];
       k++;
   }
       for(i=0;i<k;i++)
   { 
   for(j=i+1;j<k;j++)
   {
   if(c[i]>c[j])
   {
       f=c[i];
       c[i]=c[j];
       c[j]=f;    
   }
   }
   }
       for(i=0;i<k;i++)
   {
       printf("%d ",c[i]);
   }
    return 0;
}
