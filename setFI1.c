#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,k;
clrscr();
gets(a);
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("%s\n",a);
}
getch();
}
