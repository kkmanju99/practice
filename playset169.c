#include<stdio.h>

int main()
{
char a[100],i,j,count1;

scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
count1=0;
if(a[i]!='$')
{
for(j=i+1;a[j]!='\0';j++)
{
if(a[i]==a[j])
{
count1++;
a[j]='$';
}
}
printf("%c%d",a[i],count1+1);
}
}
return 0;

}
