#include<stdio.h>
void main()
{
    int num;
    printf("\nEnter a number ");
    scanf("%d",&num);
    if(num%13==0)
    {
        printf("divisible by 13");
        
    }
    else
    {
        printf("not divisible by 13");
    }
}
    
