#include <stdio.h>
int main()
{
	char str1[30];
	scanf("%s",str1);
	int count=0,flag=0,i;
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]=='a' || str1[i]=='b')
			flag=1;
		
		else
			count=count+1;
		
	}
	if(flag==1 && count==1)
		printf("yes");
	else 
		printf("no");
	
}
