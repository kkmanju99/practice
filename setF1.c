#include<stdio.h>
#include<conio.h>
void main()
{
  int num;
  scanf("%d",&num);
  if(num<0)
  {
    printf("negative");
  }
  else if(num>0)
  {
    printf("possitive");
  }
  else
  {
    printf("zero");
  }
  getch();
}
