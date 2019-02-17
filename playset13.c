#include <stdio.h>
 
int main() 
{
	int num1,sum=0,sq,rem;
	scanf("%d",&num1);
	while(num1!=0)
	{
		rem=num1%10;
		sq=rem*rem;
		sum=sum+sq;
		num1=num1/10;
	}
	printf("\n%d",sum);
	return 0;
}
