#include <stdio.h>

int main() 
{
	char str[30];
	int i,l,flag=0;
	scanf("%[^\n]",str);
	l=strlen(str);
	for(i=2;i<=l/2;i++)
	{
		if(l%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("yes");
		
	}
	else
	{
		printf("no");
	}
	
	return 0;
}
