#include<stdio.h>
int main()
{
int a,b,N1,i,c=0;
scanf("%d",&N1);
for(i=0;i<N1;i++)
{
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        c++;
    }
}
printf("%d",c);

}
