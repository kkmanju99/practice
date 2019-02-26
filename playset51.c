#include <stdio.h>

int main(void) {
  int n,a[100],i,k,m,r;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(k=0;k<(n+1)-2;k++)
  {
m=a[0];
for(i=0;i<n;i++)
{
  if(m<a[i])
  {
    m=a[i];
    r=i;
  }
}
a[r]=0;
  }
  printf("%d",m);

  return 0;
}
