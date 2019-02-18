#include <stdio.h>

int main(void) {
  char a[1000],temp;
  int i;
scanf("%[^\n]",a);
for(i=0;a[i]!='\0';i++)
{
  if(a[i]==' ')
  { temp=a[i+1];
    a[i]=temp;
    a[i+1]='#';
    
  }
}
for(i=0;a[i]!='\0';i++)
{
  if(a[i]!='#')
  {
printf("%c",a[i]);

  }
}

  return 0;
}
