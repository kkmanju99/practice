#include <stdio.h>
int main()
{
   int n1,i,c=0;
   scanf("%d",&n1);
   for(i=0;i<=100;i++)
    if(n1%3==0 || n1%7==0 ||n1%(3+7)==0)
        c++;
   
   if(c>0)
    printf("yes");
    else
    printf("no");
    return 0;
}
