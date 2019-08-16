#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,sum,d;
    float c;
    printf("\nEnter a value a and b ");
    scanf("%d%d",&a,&b);
    sum=a*b;
    printf("%d sum",sum);
    c=sqrt((double)sum);
    d=c;
    if(d==c)
    {
        printf("perfect square %d",sum);
    }
    else
    {
        printf("not perfect square %d",sum);
    }
}
