#include <stdio.h>

int main()
{
  int n,i,a[100],s;
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
 s=a[0];
  for(i=1;i<n;i++)
  {
   
   s=s&a[i];
  }

  printf("%d",s);
  
    return 0;
}
