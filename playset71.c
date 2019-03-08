#include <stdio.h>

int main(void) {
  int n,a[100],i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(i+1<n)
    {
    if(a[i]<a[i+1])
    {
      printf("%d",a[i+1]);
    }
    else
    {
      printf("%d",a[i]);
    }
  }
  
  else
  {
    break;
  }
  }
  return 0;
}
