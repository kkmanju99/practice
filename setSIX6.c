#include <stdio.h>

int main()
{
    char a[100];
    gets(a);
    int i,m=0,n=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(((a[i]>='a')&&(a[i]<='z'))||((a[i]>='A')&&(a[i]<='Z')))
        {
            m++;
        }
        if(a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9'||a[i]=='0')
        {
            n++;
        }
    }
if(m>0&&n>0)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
