#include<stdio.h>
#include<conio.h>
void main()
{
long int i,n,q;
scanf("%lld%lld",&n,&q);
for(i=n+1;i<q;i++)
{
if(i%2==0)
{
printf("%d",i);
}
}
getch();
}
