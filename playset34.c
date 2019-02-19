#include <stdio.h>

int main(void) {
  char a[100000];
  long int i;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i=i+3)
  {
    printf("%c",a[i]);
  }
  
  return 0;
}
