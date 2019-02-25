#include <stdio.h>

int main(void) {
  int a,b,c,d;
  scanf("%d%d%d",&a,&b,&c);
  d=a+b+c;
  if(d==180)
  {
    printf("yes");
  }
  else 
  {
    printf("no");
  }
  return 0;
}
