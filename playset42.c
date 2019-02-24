#include <stdio.h>

int main(void) 
{
	int n,a[10000],i,f=0,g=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);

  }
  for(i=0;i<n;i++)
  { 
    if(a[i]<=a[i+1])
    {
      f=1;
    }
    else 
    {
      f=0;
    }

  }
  for(i=0;i<n;i++)
  { 
    if(a[i]>=a[i+1])
    {
      g=1;
    }
    else 
    {
      g=0;
    }

  }
  if(f==1||g==1)
  {
    printf("yes");
  }
  else 
  {
    printf("no");
  }

	return 0;
}
