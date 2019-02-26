#include <stdio.h>
void main()
{
	char a[50],b1[50];
	int i,al=0,b2=0,c=0;
	gets(a);
	gets(b1);
	
	for(i=0;a[i]!=NULL;i++){
	al++;
	if(a[i]>='A'&&a[i]<='Z')
	a[i]+=32;
	}
	for(i=0;b1[i]!=NULL;i++){
	b2++;
	if(b1[i]>='A'&&b1[i]<='Z')
	b1[i]+=32;
	    
	}
	if(al==b2)
	{
	for(i=0;a[i]!=NULL;i++)
	{
	    if(a[i]!=b1[i])
	    {
	        c=1;
	        break;
	    }
	    
	}
	}
	if(al!=b2||c==1)
	printf("no");
	else
	printf("yes");
}
