#include <stdio.h>

int main() 

{	

   int n,n2,i;

   char c;

   for(i=0;i<4;i++)

   {

       scanf("%d %c %d",&n,&c,&n2);

       if(c=='/')

       {

           printf("%d\n",(n/n2));

       }

       else

       {

           printf("%d\n",(n%n2));

       }

   }

	return 0;

}
