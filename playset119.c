#include <stdio.h>
#include<string.h>
#include<math.h>
int main() 
{
	char str1[30];
	scanf("%s",str1);
	int i,len,value,sum=0;
	len=strlen(str1);
	int j=len-1;
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]>='A' && str1[i]<='F')
		value=(str1[i]-65)+10;
	
		else if(str1[i]>='0' && str1[i]<='9')
			value=str1[i]-48;
		sum=sum+(value*(pow(16,j)));
		j--;
	}
	printf("%d",sum);
}
