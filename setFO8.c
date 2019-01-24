#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("%d %d",a,b);
getch();
}
