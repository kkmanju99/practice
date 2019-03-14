#include <stdio.h>
#include <math.h>
int main() {
	long int n,r1=0,i=1,sum=0;
	scanf("%ld",&n);
	while(n!=0)
	{
		r1=n%10;
		sum=sum+r1*i;
		n=n/10;
		i=i*2;
	}
	printf("%lo",sum);
	return 0;
}
