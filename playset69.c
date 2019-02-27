#include <stdio.h>

int main(void) {
int a[100],n,i,k;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
n=n-k;
for(i=0;i<n;i++)
{ 
printf("%d\t",a[i]);
}

  
return 0;
}
