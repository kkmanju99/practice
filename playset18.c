#include <stdio.h>

int main() 
{
	int l,r,len1,i;
	scanf("%d %d",&l,&r);
	if(l>r)
	{
		len=l;
	}
	else
	{
		len1=r;
	}
	for(i=2;i<=len1;i++)
	{
		if((i%l==0) && (i%r==0))
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
