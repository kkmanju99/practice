#include <stdio.h>



int main(void)

{

	char str[50];

	int i,n1;

	scanf("%s %d",str,&n1);

	int len;

	len=strlen(str);

	for(i=n1;i<=len;i++)

	{

		printf("%c",str[i]);

	}



	return 0;

}
