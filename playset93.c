#include <stdio.h>

int main()
{
  int a[1000],i,n,t;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i=i+2)
  {  
    t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
  }
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
    return 0;
}
