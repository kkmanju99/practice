#include <stdio.h>

int main() 
{
	int n;
  int a[100],i,sum=0,res;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	res=sum;
	printf("%d",res);
	return 0;
}
