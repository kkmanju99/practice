#include<stdio.h>
void main()
{
int m1,m2,h1,h2,ans1,ans2;
scanf("%d %d",&h1,&m1);
scanf("%d %d",&h2,&m2);
ans1=h1-h2;
ans2=m1-m2;
if(ans1<0||ans2<0)
{
    ans1=(ans1*ans1)/(-ans1);
    ans2=(ans2*ans2)/(-ans2);
}
printf("%d %d",ans1,ans2);

}
