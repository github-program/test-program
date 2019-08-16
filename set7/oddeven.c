#include <stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter number of elements a and b");
    scanf("%d%d", &a,&b);
    sum=a+b;
    if(sum%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
