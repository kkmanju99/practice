
#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],max,min,j,n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=0;
for(i=0;i<n;i++)
{
if(max< a[i])
{
max=a[i];
}
}
min=a[0];
for(i=0;i<n;i++)
{
if(min>a[i])
{
min=a[i];
}
}
printf("%d",min);
printf("%d",max);
getch();
}

