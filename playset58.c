#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100000

int count(char * str, char * str1);


int main()
{
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];
    int c;

 
    gets(str1);
   
    gets(str2);

    c = count(str1, str2);

    printf("%d",c);

    return 0;
}
