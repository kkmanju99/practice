#include <stdio.h>

int main(void) 
{
	int n1,i;
	scanf("%d",&n1);
	for(i=1;i<=n1;i++)
	{
		if(n1%i==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
