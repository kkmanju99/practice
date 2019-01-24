#include<stdio.h>
#include<conio.h>
void main()
{
int n3,n1=0,n2=1,n,i;
clrscr();
scanf("%d",&n);
printf("%d",n2);
for(i=0;i<n;i++)
{
n3=n1+n2;
if(n3<=n)
{
printf("%d",n3);
}
n1=n2;
n2=n3;
}
getch();
}
