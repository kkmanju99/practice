#include <stdio.h>
#include<math.h>

int main(void) {
  int a;
  float res;
  scanf("%d",&a);
  res=sin(a*3.14/180);
  printf("%.1f",res);
  return 0;
}
