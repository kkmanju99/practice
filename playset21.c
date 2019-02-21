#include <stdio.h>

int main() 
{
	int a,b,c,d,e,f;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

	if((a==c&&c==e)||(b==d&&d==f))
	{
		printf("yes");
	}
	else if(a==b&&c==d&&d==e&&e==f)
	{
		printf("yes");
	}
	else 
	{
		printf("no");
	}
	return 0;
}
