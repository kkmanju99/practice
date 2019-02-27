#include <stdio.h>

int main()
{


int N1;
scanf("%d",&N1);
int a[100][100],i,j,c=0;
for(i=1;i<=N1;i++)
{for(j=1;j<=N1;j++)
    {
         scanf("%d",&a[i][j]);  }}
for(i=0;i<=N1;i++)
{
    for(j=0;j<=N1;j++)
    {
      if(a[i][j]==1)
      {
          if(a[i-1][j]==0&&a[i][j-1]==0&&a[i][j+1]==0&&a[i+1][j]==0)
       
          {
              c++;
              
          }
          } }
    }
    
    printf("%d",c);
}
