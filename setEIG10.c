#include <stdio.h>

int main() 
{
	int num,rem1,rev=0;
	scanf("%d",&num);
	while(num!=0)
	{
		rem1=num%10;
		rev=(rev*10)+rem1;
		num=num/10;
	}
	num=rev;
	while(num!=0)
	{
		rem1=num%10;
		if(rem1%2==1)
		{
		printf("%d ",rem1);
		}
		num=num/10;
	}
	return 0;

}
