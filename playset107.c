#include<string.h>

int main()
{
    char s[1000],x[1000],c1[1000];
    int i,j,k=0,n=0,l=0,m,d=0;
    gets(s);
    gets(x);
    m=strlen(x);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
        {
           c1[k]=s[i]; 
           k++;
        }
        if(s[i]==' ')
        {
            d++;
            for(j=0;j<k;j++)
            {
                if(c1[j]==x[l])
                {
                    n++;
                }
                l++;
            }
            for(j=0;j<k;j++)
            {
                c1[j]='\0';
                n=0;
                l=0;
            }
        }
    }
    n=0;
    l=0;
        for(j=0;j<k;j++)
            {
                if(c1[j]==x[l])
                {
                    n++;
                    l++;
                }
            }
            if(m==n)
            {
                d++;
            }
            
printf("%d",d);
    return 0;
}
