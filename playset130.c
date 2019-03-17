#include <stdio.h>

int main(void) 
{
	int n;
	int a[1000],i,sum=0;
  scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(sum%2==0)
		{
			printf("%d",sum);
		}
		else
		{
			printf("%d",a[i]);
		}
	}
	return 0;
}
