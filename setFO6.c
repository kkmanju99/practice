#include<stdio.h>
void main()
{
char a[100];
int i,c=0,d=0;
gets(a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]>='a'&&a[i]<='z')||(a[i]>='0'&&a[i]<='9'))
{
c++;
}
else
{
    d++;
}
}

printf("%d",d);
}
