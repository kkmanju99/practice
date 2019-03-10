#include <stdio.h>

int main(void) 
{
	int n,k,d;
	int a[100000],i;
  scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
    d=a[i]-a[i+1];
		if(d==k)
		{
			printf("%d",a[i]);
			break;
		}
	}
	return 0;
}
