#include <stdio.h>

int main(void) 
{
	int n1,i,j,a[40],count=0,flag1;
	scanf("%d",&n1);
	for(i=2;i<n1;i++)
	{
		if(n1%i==0)
		{
			flag1=1;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					flag1=0;
					break;
				}
			}
			if(flag1==1)
			{
				printf("%d ",i);
			}
		}
	}
	return 0;
}
