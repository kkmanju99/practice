#include <stdio.h>



int main() 

{

	int n,n2,i;

	for(i=1;i<=3;i++)

	{

	scanf("%d %d\n",&n,&n2);

	if(n>n2)

	{

		printf("\n%d",n-n2);

	}

	else

	{

		printf("\n%d",n2-n);

	}

	}

	return 0;

}
