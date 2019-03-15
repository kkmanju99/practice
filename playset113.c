#include <stdio.h>
#include<string.h>
int main()
{
	char a[20];
		int n;
	scanf("%s",a);

	if(a[0]<'3' && a[1]<'10' && a[2]=='/' && a[3]<'1' && a[4]<'10' && a[5]=='/' && a[6]<'10' && a[7]<'10' && a[8]<'10' && a[9]<'10')
	{
		n=1;
	}
	else
	{
		n=0;
		
	}
	if((a[0]=='3' && a[1]<'2')&&(a[3]<='1' && a[4]<'3'))
	{
	    n=1;
	}
	if(n==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	
	return 0;
}
