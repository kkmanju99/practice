#include<stdio.h>
int main()
{
  int n1,i,c=0;
  scanf("%d",&n1);
  for(i=1;i<=n1;i++)
  {
    if(n1%i==0)
    {
      if(i%2!=0)
      {
        printf("%d\t",i);
      }
    }

  }
  return 0;
}
