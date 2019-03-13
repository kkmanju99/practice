#include <stdio.h>

int main()
{
  int n,k,i,f=1,c,d=1;
  scanf("%d %d",&n,&k);
  c=n-k;
  for(i=1;i<=n;i++)
  {
      f=f*i;
  }
    for(i=1;i<=c;i++)
  {
      d=d*i;
  }


  printf("%d",(f/(d)));
  
    return 0;
}
