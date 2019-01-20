#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,q,j,flag;
scanf("%d%d",&n,&q);
for(i=n+1;i<q;i++)
{
flag=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d",i);
}
}
getch();
}
