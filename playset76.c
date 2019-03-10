#include <stdio.h>

int main(void) 
{
	int n;
	int a[10000],i,even=0,odd=0,temp1,temp2;
  	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even=even+1;
			temp1=a[i];
		}
		else
		{
			odd=odd+1;
			temp2=a[i];
		}
	}
	if(even==1)
	{
		printf("%d",temp1);
	}
	else
	{
		printf("%d",temp2);
	}
	
	return 0;
}
