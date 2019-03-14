#include <stdio.h>

int main(void) 
{
	long n,i,r,a[100],k=0,s=0;
  scanf("%ld",&n);
  while(n>0)
  {
    r=n%10;
    a[k]=r;
    k++;
    n=n/10;
  }
  for(i=0;i<k;i++)
  {
    if(i==0||i==k-1)
    {
      s=s+a[i];
    }
  }
  printf("%ld",s);
	return 0;
}
