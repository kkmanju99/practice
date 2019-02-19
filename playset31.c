#include <stdio.h>

int main(void) {
  char a[10000];
  int i,b=0,c=0,d=0,e=0,f=0,g=0,z=0;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]=='('||a[i]==')'||a[i]=='{'||a[i]=='}'||a[i]=='['||a[i]==']')
    {
      if(a[i]=='(')
      {
        b++;
      }
       if(a[i]==')')
      {
        c++;
      }
       if(a[i]=='{')
      {
        d++;
      }
       if(a[i]=='}')
      {
        e++;
      }
       if(a[i]=='[')
      {
        f++;
      }
       if(a[i]==']')
      {
        g++;
      }
    }
    else
    {
      z++;
    }
  }
  if(b==c&&d==e&&f==g&&z==0)
  {
    printf("yes");
  }
  else 
  {
    printf("no");
  }
  return 0;
}
