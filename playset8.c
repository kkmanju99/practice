#include <stdio.h>
int main(void) {
 char a[100];
 int i;
 scanf("%[^\n]",a);
 for(i=0;a[i]!='\0';i++)
 {
   if(a[i]==' ')
   {
     if(a[i+1]>=97&&a[i+1]<=122)
     {
       a[i+1]=a[i+1]-32;
     }

     }
   }

 a[0]=a[0]-32;
 printf("%s",a);
    return 0;
}
