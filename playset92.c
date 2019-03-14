#include <stdio.h>

int main()
{
  long n,r,base=1,bin=0;
   scanf("%ld",&n);
   
   while(n)
   {
       
       r=n%10;
       n=n/10;
       bin=bin+(r*base);
      base=base*2;
      
   }
   printf("%ld",bin);
    return 0;
}
