#include <stdio.h>

int main() 
{
	int n,n2,pro,i,flag=0;
	scanf("%d %d",&n,&n2);
	pro=n*n2;
	for(i=1;i<=pro/2;i++)
	{
		if(i*i==pro)
		{
			flag=1;
			break;
		}
	
	}
	
	if(flag==1)
	{
		printf("\nyes");
	}
	else
	{
		printf("\nno");
	}
	return 0;
}
