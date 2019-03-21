#include<stdio.h>
int main()
{
    int n1,m[100],i,j,a,t;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
      scanf("%d",&m[i]);
   
    if(n1%2==0)
          a=n1/2; 
    
    else
      a=(n1-1)/2;
    
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(m[i]>m[j])
            {
                t=m[i];
                m[i]=m[j];
                m[j]=t;
            }
        }
    }
    for(i=a;i<n1;i++)
    {
        for(j=i+1;j<n1;j++)
        {
            if(m[i]<m[j])
            {
                t=m[i];
                m[i]=m[j];
                m[j]=t;
            }
        }
    }
    for(i=0;i<n1;i++)
      printf("%d ",m[i]);
      return 0;
    
  }
