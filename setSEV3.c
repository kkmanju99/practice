#include <stdio.h>

int main()
{
    char a[100];
    int i,m=0,n=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='0'||a[i]=='1')
        {
            m++;
        }
        else
        {
            n++;
        }
    }
    if(n==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
