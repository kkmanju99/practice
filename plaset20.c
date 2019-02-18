#include <stdio.h>

int main() 
{
	char str[50];
	int i,n1;
	scanf("%s",str);
	n1=strlen(str);
	for(i=0;i<n1;i++)
	{
		str[i]=str[i]+3;
		if(str[i]=='X')
		str[i]='A';
		if(str[i]=='Y')
		str[i]='B';
		if(str[i]=='Z')
		str[i]='C';
	}
	printf("%s",str);
	return 0;
}
