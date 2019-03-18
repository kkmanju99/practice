#include <stdio.h>

int main() 
{
	int n,i,x=1,flag1=0;
	scanf("%d",&n);
	for(i=0;i<n/2;i++)
	{
		x=x*2;
		if(x==n)
		{
			flag1=1;
			break;
		}
	}
	if(flag1==1)
	{
		printf("yes");
	}
	else if(flag1==0)
	{
		printf("no");
	}
	return 0;
}
