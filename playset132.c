#include<stdio.h>
void main()
{
    char a1[1000000];
    int i,j,c=0,n1=0,s;
    scanf("%s",a1);
    for(i=0;a1[i]!='\0';i++)
    {
        if(a1[i]%2==0)
         c++;
       
        if(a1[i]%2!=0)
          n1++;
        
    }
    if(n1>0 && c>0)
       s=n1*c;
    
    printf("%d",s);
 
}
