#include <stdio.h>
int main()
{
    int a,sum;
    printf("Enter a value a");
    scanf("%d", &a);
    sum=a+1;
    printf("%d is product/n",sum);
    if(sum%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    
}
