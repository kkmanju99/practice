#include<stdio.h>
#include<conio.h>
void main()
{
int a,rem,sum=0,c=0;
scanf("%d",&a);
while(a>0)
{
c++;
a=a/10;
}
printf("%d",c);
getch();
}
