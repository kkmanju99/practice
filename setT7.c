#include <stdio.h>

int main()
{
    char a[100];
    int i,c=0,d=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        d++;
    }
    for(i=0;a[i]!='\0';i++)
    {   
        if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
        {
            c++;
        }
    }
    if(d==c)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
