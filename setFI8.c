#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],sum=0,i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    sum=sum+a[i];
}
sum=sum/n;
printf("%d",sum);
getch();
}

