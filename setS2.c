#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,rem,sum=0,temp;
scanf("%d",&n);
temp=n;
while(n>0)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;
}
if(temp==sum)
{
printf("yes");
}
getch();
}
