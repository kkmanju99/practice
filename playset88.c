#include <stdio.h>

int main(void) 
{
	int n,k;
  float re;
	scanf("%d %d",&n,&k);
	re=n>>k;
	printf("%.2f",re);
	return 0;
}
