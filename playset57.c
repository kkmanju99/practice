#include <stdio.h>

int main(void) 
{
	char str1[20],c;
	int i,count=0;
	scanf("%s %c",str1,&c);
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==c)
		{
			count=count+1;
			
		}
	}
	printf("%d",count);
	return 0;
}
