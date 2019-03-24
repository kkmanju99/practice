#include <stdio.h>

void main()
{
	int n,k;
	int array[100],i,flag=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	
	for(i=0;i<n;i++)
	{
		if(array[i]==k)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("yes");

	else
printf("no");

}
