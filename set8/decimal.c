#include <stdio.h>
int main()
{
    float x,r;
    int q;
    printf("enter the float value");
    scanf("%f",&x);
    q=(int)x;
    r=x-q;
    printf("part is=%d",q);
    printf("decimal part is=%f",r);
}
