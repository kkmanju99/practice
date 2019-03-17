#include <stdio.h>

int main(void) 
{
	long int n;
	long int a[1000],i,mul=1;
  scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		mul=mul*a[i];
	}
	if(mul%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	
	return 0;
}
