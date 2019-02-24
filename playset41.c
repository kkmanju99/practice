#include <stdio.h>

int main(void) 
{
	int n1,k,i,j,mul=1,flag=0;
	scanf("%d %d",&n1,&k);
	for(i=0;i<n1;i++)
	{
			for(j=i;j>0;j--)
			{
				mul=mul*k;
				if(mul==n1)
				{
					flag=1;
					break;
				}
			}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
