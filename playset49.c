#include <stdio.h>

int main(void) {
  long int n;
  scanf("%ld",&n);
  if((n>=-32768)&&(n<32767))
  {
    printf("INT");
  }
  else 
  {
    printf("LONG");
  }
  return 0;
}
