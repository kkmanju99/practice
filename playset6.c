#include <stdio.h>
#include<string.h>
int main() 
{
	char str1[50],str2[50];
	int i,j,flag=1,u,v,a,b;
	scanf("%s %s",str1,str2);
	a=strlen(str1);
	b=strlen(str2);
	if(a==b)
	{
	for(i=0;i<a;i++)
	{
		for(j=i+1;j<b;j++)
		{
			u=str1[i]-str1[j];
			v=str2[i]-str2[j];
			if(u==v)
			{
				flag=0;
			}
			else
			{
				flag=1;
				break;
			}
		}
	}
	}
	else
	{
		printf("\nno");
	}
	if(flag==1)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}

	return 0;
}
