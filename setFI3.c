#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];
int i,c=0;
clrscr();
gets(a);
gets(b);
for(i=0;a[i]!='\0';i++)
{
c++;
}
for(i=0;b[i]!='\0';i++)
{
  a[c]=b[i];
  c++;

}
printf("%s",a);
getch();
}
