#include <stdio.h>

int main(void) 
{
	int l,r,i,k,count=0;
	scanf("%d %d",&l,&r);
	for(i=l;i<=r;i++)
	{
		for(k=2;k<=r;k++)
		{
			if((k*k)==i)
			{
				count=count+1;
			}
		}
	}
	printf("%d",count);
	return 0;
}
