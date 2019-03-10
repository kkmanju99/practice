#include <stdio.h>

int main(void) 
{
	int n;
	int a[10000],i,count=1;
  scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<a[i+1])
		{
			count=count+1;
		}
		if(a[i]>a[i+1])
		{
			break;
		}
	}
	printf("%d",count);
	return 0;
}
