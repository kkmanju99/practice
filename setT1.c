#include<stdio.h>
#include<conio.h>
void main()
{
int a,sum=0,n,d,i;
clrscr();
scanf("%d%d%d",&a,&n,&d);
for(i=a;i<=n;i=i+d)
{
sum=sum+i;
}
printf("%d",sum);
getch();
}
