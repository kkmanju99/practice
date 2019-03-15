#include <stdio.h>

int main()
{
   int N,a1[100000],i,j;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a1[i]);
   }
      for(i=0;i<N;i++)
   {
     for(j=i+1;j<N;j++)
     {
         if(a1[i]!='\0'&&a1[j]!='\0')
         {
      if(a1[i]==a1[j])  
      {
          a1[j]='\0';
      }
       }     
     }
   }
      for(i=0;i<N;i++)
   {
        if(a1[i]!='\0')
        printf("%d ",a1[i]);
       }
    return 0;
}
