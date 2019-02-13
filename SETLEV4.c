#include <stdio.h>
int main(void) 
{
int m,k,i,result=1;
scanf("%d %d",&m,&k);
for(i=1;i<=k;i++)
 {
   result=result*m;	
 }
printf("%d",result);
return 0;
}