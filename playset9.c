#include <stdio.h>
int main(void) {
 long int r1,r2,i,j,flag,c=0;
  scanf("%ld%ld",&r1,&r2);
  for(i=r1;i<=r2;i++)
  {   flag=0;
    for(j=2;j<=i/2;j++)
    {
      if(i%j==0)
      {
        flag=1;
        break;
      }
    }
    if(flag==0)
    {
      c++;
    }
  }
  printf("%ld",c);

    return 0;
}
