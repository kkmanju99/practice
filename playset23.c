#include <stdio.h>

int main(void) {
  int a[10000],i,n,k,b[10000],max,j=0;
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<k;i++)
  {
    scanf("%d",&b[i]);
  }
  while(j<k)
  {
    a[n]=b[i];
    n++;
  max=a[0];
  for(i=0;i<n;i++)
  {
    if(max<a[i])
    {
      max=a[i];
    }
  }
  printf("%d\t",max);
  j++;
  }
  return 0;
}
