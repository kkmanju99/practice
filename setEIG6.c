#include<stdio.h>

int main()

{

int num1,i,flag=0;

scanf("%d",&num1);

for(i=2;i<=num1/2;i++)

{

if(num1%i==0)

{

flag=1;

break;

}

}

if(flag==0)

{

printf("\n no");

}

else

{

printf("\n yes");

}

return 0;

}
