#include <stdio.h>
int main()
{
   int n1,i,a[1000],b[1000],c[1000],d=0,k=0;
   scanf("%d",&n1);
   for(i=0;i<n1;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n1;i++)
   {
     if(a[i]==0)
     {
       b[k]=a[i];
       k++;
       a[i]='#';
            }
            
   }
   for(i=0;i<n1;i++)
   { if(a[i]!='#')
   {
     c[d]=a[i];
     d++;
    
   }
   }
   printf("\n");
   for(i=0;i<n1;i++)
   {
   c[d]=b[i];
   d++;;
   }
   
  for(i=0;i<n1;i++)
  {
    printf("%d",c[i]);
  }
    return 0;
}
