#include<stdio.h>
int main(void)
{
	int n1,i,a,b,c;
	scanf("%d",&n1);
	for(i=1;i<=n1;i++)
	{
		a=pow(2,i);
		if(a>n1)
		{
			b=i;
			break;
		}
	}
	c=pow(2,b);
	printf("\n%d",c);
	
	return 0;
}
