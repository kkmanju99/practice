#include <stdio.h>

int main(void) {
  int n,x,i,a[1000],j,c=0;
  scanf("%d%d",&n,&x);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=1;j<n;j++)
    {
      if((a[i]+a[j])==x)
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
