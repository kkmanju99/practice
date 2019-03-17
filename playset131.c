#include <stdio.h>

int main() 
{
	int num,rem1,sum=0;
	scanf("%d",&num);
	while(num!=0)
	{
		rem1=num%10;
		if(rem1%2!=0)
		{
			sum=sum+rem1;
		}
		num=num/10;
	}
	
	if(sum%2==0)
	{
		printf("E");
	}
	else
	{
		printf("O");
	}
	return 0;
}
