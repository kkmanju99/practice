#include<stdio.h>
int main()
{
    char a1[1000];
    int i,n,j;
    scanf("%s",a1);
    for(i=0;a1[i]!='\0';i++)
    
    {
    
        if(a1[i]>='1' && a1[i]<='9')
        {
            n=a[i]-48;
            for(j=0;j<n;j++)
            {
                printf("%c",a1[i-1]);
            }
        }
    }
    return 0;
}
