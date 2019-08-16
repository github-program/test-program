#include<stdio.h>
void main()
{
  int num;
  printf("\nEnter a number ");
  scanf("%d",&num);
  if(num%7==0)
    {
      printf("divisible by 7");
    }
    else
    {
      printf("not divisible by 7");
    }
}
