#include <stdio.h>

int main(void) 
{
	int n,count=0;
	scanf("%d",&n);
	int a[n],j,i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				count=count+1;
			}
		}
	}
	printf("%d",count);
	return 0;
}
