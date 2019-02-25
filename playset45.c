#include <stdio.h>
int main()
{
    int P1,A,i,j,p,a,c=0;
	scanf("%d %d",&P1,&A);
	for(i=1;i<=P1;i++)
	{
	    for(j=1;j<=A;j++)
	{
	    p=2*(i+j);
	    a=i*j;
	    if(p==P1 && a==A)
	    {
	        
	        c++;
	       
	        break;
	    }
	}

	}
	if(c==0)
	{
	    printf("no");
	}else
	 printf("yes");
  return 0;
}
