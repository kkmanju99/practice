#include <stdio.h>

int main(void) 
{
	char str1[20],c;
	int i;
	scanf("%s %c",str1,&c);
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==c)
		{
			printf("%d",i+1);
			break;
		}
	}
	return 0;
}
