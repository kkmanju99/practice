#include<stdio.h>
int main()
{
  int n1,i,c=0;
  scanf("%d",&n1);
  for(i=n1-1;i>1;i--)
  {
      if(n1%i==0)
      {
          printf("yes");
          c=1;
          break;
      }
  }
  if(c==0)
  printf("no");
  return 0;
}
