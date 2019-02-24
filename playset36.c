#include<stdio.h>
int main(){
  long int n;
  int k,r,c=0;
  scanf("%ld%d",&n,&k);
  while(n>0)
  {
    r=n%10;
    if(r==k)
{
  c++;
}
n=n/10;
  }
  printf("%d",c);
            return 0;
}
