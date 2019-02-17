#include <stdio.h>

int main() 
{
	int n,i,j,num,min;
	int array[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		int count=0;
		for(j=0;j<n;j++)
		{
			if(array[i]==array[j] && i!=j )
			{
				count=count+1;	
			}
			
		}
	if(count==0)
	{
		printf("%d",array[i]);
	}
	}

	
	
	return 0;
}
