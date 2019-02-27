#include <stdio.h>

int main(void) {
char a[100000],b[10000]="Answer";
int i,c=0;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
  c++;
}
  a[c]=' ';
  c++;
for(i=0;i<=6;i++)
{
  a[c]=b[i];
  c++;
}
printf("%s",a);
  
return 0;
}
