#include<stdio.h>
#include<conio.h>
void main()
{
int m1,m2,h1,h2,ans1,ans2;
scanf("%d %d",&h1,&m1);
scanf("%d %d",&h2,&m2);
ans1=h1-h2;
ans2=m1-m2;
printf("%d %d",ans1,ans2);
getch();
}
