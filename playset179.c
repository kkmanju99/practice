#include <stdio.h>
void main()
{
   int a,b,mul1,bin=0,rem,rem2,power=1,count=0;
   scanf("%d%d",&a,&b);
   mul1=a^b;
   while(mul1>0)
   {
       rem=mul1%2;
       bin=bin+rem*power;
       mul1=mul1/2;
       power=power*10;
   }
   while(bin>0)
   {
       rem2=bin%10;
       if(rem2==1)
       {
           count++;
       }
       bin=bin/10;
   }
   printf("%d",count);
}
