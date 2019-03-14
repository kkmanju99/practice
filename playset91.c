#include <stdio.h>

int main()
{
  long n,r,base=1,bin=0;
   scanf("%ld",&n);
   
   while(n)
   {
       
       r=n%2;
       n=n/2;
       bin=bin+(r*base);
      base=base*10;
      
   }
   printf("%ld",bin);
    return 0;
}
