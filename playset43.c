#include<stdio.h>
 
void main()
{
    char N[100000], M[100];
    int count1 = 0, count2 = 0, i, j, flag1;
 

    gets(N);
  
    gets(M);
    
    count1=strlen(N);
    count2=strlen(M);
 
    for (i = 0; i <= count1 - count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            flag1 = 1;
            if (N[j] != M[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag1 == 1)
            break;
    }
    if (flag1 == 1)
        printf("yes");
    else
        printf("no");
}
