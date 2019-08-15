#include <stdio.h>
int main()
{
   int a,b,sum;
   printf("Enter a value a and b");
   scanf("%d%d", &a,&b);
   sum=a*b;
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
