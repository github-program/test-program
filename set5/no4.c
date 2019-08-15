#include <stdio.h>
int main()
{
	int number;
	printf("Enter any number:");
	scanf("%d",&number);
	switch(number)
	{
	    case 1 ... 10:
			printf("Number is in between 1 to 10\n");			
			break;
		default:
			printf("Number is out of range!!!\n");
			break;							
	}
	return 0;
}
