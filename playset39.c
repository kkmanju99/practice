#include <stdio.h>

int main(void) {
  int a,n=0;
  scanf("%d",&a);
  while(a!=1)
  {

  if(a%2!=0)
  {
    n=1;
  }
  a=a/2;
  }
  if(n==0)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  return 0;
}
