#include <stdio.h>
int main(void) {
  char a[100],b[100];
  int i,c=0,d=0,e=0,f=0,p;
  scanf("%s",a);
  scanf("%s",b);
  scanf("%d",&p);
  for(i=0;a[i]!='\0';i++)
  {
    c++;
  }
  for(i=0;b[i]!='\0';i++)
  {
    d++;
  }
  if(c==d)
  {
    for(i=0;a[i]!='\0';i++)
    {
      if(a[i]==b[i])
      {
        e++;
      }
      else
      {
        f++;
      }
    }
  }
  if(f==p)
  {
    printf("yes");
  }
  else 
  {
    printf("no");
  }
    return 0;
}
