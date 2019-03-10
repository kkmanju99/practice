#include <stdio.h>

int main(void) {
  int a[100000],n,i,c;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]<a[i+1])
    {
      c++;
    }
    if(a[i]>a[i+1])
    {
      printf("%d",a[i]);
      break;
    }
  }
  return 0;
}
