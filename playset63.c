#include <stdio.h>

int main(void) {
  int n,i,j,a[1000],b[1000];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
   for(i=0;i<n;i++)
  {
    scanf("%d",&b[i]);
  }
   for(i=0;i<n;i++)
  {  
    
    for(j=0;j<n;j++)
    {
    if(a[i]==b[j])
    {
      printf("%d\t",a[i]);
      b[j]='+';
      
    
    }
  }
  }

  return 0;
}
