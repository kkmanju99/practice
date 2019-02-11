#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int n,i,temp1;
    scanf("%s",a);
    n=strlen(a);
    if(n%2!=0)
      {
          temp1=n/2;
          a[temp1]='*';
          printf("%s",a);
      }
      else
      {
          temp1=n/2;
          a[temp1]='*';
          a[temp1-1]='*';
          printf("%s",a);
      }
	return 0;
}
