
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,max;
clrscr();
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<10;i++)
{
if(max<a[i])
{
max=a[i];
}
}
printf("%d",max);
getch();
}
