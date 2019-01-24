#include <stdio.h>

int main()
{
   char a[100];
   int i,c=0;
   gets(a);
   for(i=0;a[i]!='\0';i++)
   {
       c++;
   }
   a[c]='.';
   a[c+1]='\0';
   printf("%s",a);

    return 0;
}
