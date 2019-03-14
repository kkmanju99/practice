#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000],k;
    int i,l,c=0;
    gets(a);
    scanf("%c",&k);
    l=strlen(a);
  
    for(i=0;i<l-1;i++) 
     {
       if(a[i]>='0' && a[i]<=k)
         {    c++;
         }
  
       }
       
     if(l-1==c)
        printf("yes");
    else
         printf("no");
    
}
