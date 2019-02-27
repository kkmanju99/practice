#include <stdio.h>

int main(void) {
  int n,x,i,j,c=0;
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
x=n/i;
j=n%i;
if(((x%2)!=0)&&(j==0))
{
  printf("%d",i);
  break;
}
  }

  return 0;
}
