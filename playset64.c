#include <stdio.h>

int main(void) {
int a[100],b[100],i,k,n,m,j,d,c,temp;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
m=0;
c=0;
for(i=0;i<n;i++)
{
  if(a[i]<k)
  {
    b[m]=a[i];
    m++;
    c++;
  }
}

for(i=0;i<c;i++)
{
  for(j=i;j<c;j++)
  {
    if(b[i]>b[j])
    {
      temp=b[i];
      b[i]=b[j];
      b[j]=temp;
    }
  }
}

for(i=0;i<c;i++)
{
  printf("%d\t",b[i]);
}
  return 0;
}
