#include <stdio.h>
#include<string.h>
int main() 
{
	char str[50],temp[10];
	int i,j,n1,k;
	scanf("%s",str);
	n1=strlen(str);
	while(i<j)
	{
		for(i=0;i<n1;i++)
		{
			for(j=n1;j>=1;j--)
			{
				temp[k]=str[i];
				str[i]=str[j];
				str[j]=str[i];
			}
		}
	}
	printf("\nyes");
	return 0;
}
