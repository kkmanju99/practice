#include <stdio.h>

int main() 
{
	char str[20];
	int i,n1;
	scanf("%s",str);
	n1=strlen(str);
	for(i=0;i<n1;i++)
	{
		if(i%2==0)
		{
			printf("%c",str[i]);
		}
		
	}
	printf(" ");
	for(i=0;i<n1;i++)
	{
		if(i%2==1)
		{
			printf("%c",str[i]);
		}
		
	}
	
	return 0;
}
