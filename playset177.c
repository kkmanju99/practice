#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[100],t1;
    int i,j,l,k=0,m;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]!=' ')
        {
            b[k]=a[i];
            k++;
        }
        if(a[i]==' ')
        {
            for(j=0;j<k;j++)
            {
                for(m=j+1;m<k;m++)
                {
                    if(b[j]>b[m])
                    {
                        t1=b[j];
                        b[j]=b[m];
                        b[m]=t1;
                    }
                }
            }
            printf("%s ",b);
            for(j=0;j<k;j++)
            {
                b[j]='\0';
            }
            k=0;
        }
    }
        for(j=0;j<k;j++)
            {
                for(m=j+1;m<k;m++)
                {
                    if(b[j]>b[m])
                    {
                         t1=b[j];
                        b[j]=b[m];
                        b[m]=t1;
                    }
                }
            }
        
            printf("%s",b);
            
    }
