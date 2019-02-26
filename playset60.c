#include <stdio.h>

int main(void) {
  char a[1000],b[1000];
  int c=0,i,j,d=0,e=0;
  scanf("%s%s",a,b);
  for(i=0;a[i]!='\0';i++)
  { 
    for(j=0;b[j]!='\0';j++)
    { 
if(a[i]==b[j])
{
  c++;
}
    }
  }
  if(c>0)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
    


  return 0;
}
