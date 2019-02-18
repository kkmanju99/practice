#include <stdio.h>
#include<string.h>
int main()
{
   char str[50][50],t[50];
   int n1;
   scanf("%d",&n1);
   for(int i=0;i<n1;i++)
   {
       scanf("%s",str[i]);
   }
   for(int i=0;i<n1;i++)
   {
       for(int j=i+1;j<n1;j++)
       {
           if(strcmp(str[i],str[j])>0)
           {
               strcpy(t,str[i]);
               strcpy(str[i],str[j]);
               strcpy(str[j],t);
             
               
           }
       }
   }
   for(int i=0;i<n1;i++)
   {
       printf("\n%s",str[i]);
   }
    return 0;
}
