#include<stdio.h>
int main()
{
    char a1[50],b,c;
    int n,i,j,k,l=0;
    scanf("%s",a);
    scanf("%d",&n);
    for(i=0;a1[i]!='\0';i++)
    l++;
    for(i=1;i<=n;i++)
    {
        b=a1[l-1];
       for(j=l-2;j>=0;j--)
 	{
	   a1[j+1]=a1[j];
	}
	    a1[0]=b;
        }
    puts(a1);
    return 0;
    
}
