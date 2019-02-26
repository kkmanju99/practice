#include <stdio.h>

int main(void) {
  char a[1000];
  int c=0,i;
  scanf("%[^\n]",a);
  for(i=0;a[i]!='\0';i++)
  {
    c++;
  }
  printf("%d",c);

  return 0;
}
