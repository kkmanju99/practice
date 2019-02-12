#include <stdio.h>



int main() 

{

	int l,b,h;

	scanf("%d %d %d",&l,&b,&h);

	int volume,tsa;

	volume=l*b*h;

	tsa=2*((l*b)+(b*h)+(h*l));

	printf("\n%d",volume);

	printf("\n%d",tsa);

	return 0;

}
