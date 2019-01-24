#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int c=0,i;
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=' ')
{
c++;
}
}
printf("%d",c);
getch();
}
