#include<stdio.h>
void main()
{
int a[10],i,j,temp1,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp1=a[i];
a[i]=a[j];
a[j]=temp1;
}
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
