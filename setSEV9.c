#include <stdio.h>

int main(void) 
{
	int n,n2,diff;
	scanf("%d",&n);
	scanf("%d",&n2);
	diff=n-n2;
	if(diff%2==0)
	{
		printf("\neven");
	}
	else
	{
		printf("\nodd");
	}
	return 0;
}
