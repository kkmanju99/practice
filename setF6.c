#include<stdio.h>
#include<conio.h>
void main()
{
int yr;
scanf("%d",&yr);
if((yr%4==0)&&(yr%100!=0)||(yr%400==0))
{
printf("Yes");
}
getch();
}
