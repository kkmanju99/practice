#include<stdio.h>
#include<string.h>
int main()
{
    char a1[1000];
    int i,j,l,n=1;
    gets(a1);
    
    l=strlen(a1);
    for(i=0;i<l;i++)
    {
        n=1;
        for(j=i+1;j<l;j++)
        {
            if((a1[i]==a1[j]) && (a1[j]>='a'&& a1[j]<='z'))
            {
                a1[j]=a1[j]-32;
                n++;
            }
        }
        if(n>1)
        {
            a1[i]=a1[i]-32;

        }
    }
    puts(a1);
    return 0;
}
