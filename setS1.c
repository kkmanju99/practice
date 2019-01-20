#include<stdio.h>
#include<conio.h>
void main()
{
int p=1,n,k,i;
clrscr();
scanf("%d%d",&n,&k);
for(i=1;i<=k;i++)
{
p=p*n;
}
printf("%d",p);
getch();
}
