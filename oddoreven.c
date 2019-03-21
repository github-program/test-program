#include <stdio.h>

int main()
{
    int number;
    printf("enter an integer");
    scanf("%d",&number);
    if(number % 2==0)
    {
    printf("even");
    }
    else
    {
        printf("odd or invalid");
    }
    

    return 0;
}
