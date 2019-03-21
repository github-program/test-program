#include <stdio.h>
int main()
{
    char convowel;
    printf("Enter a character: ");
    scanf("%c",&convowel);

    if( (convowel>='a' && convowel<='z') || (convowel>='A' && convowel<='Z'))
        printf("%c is an alphabet.",convowel);
    else
        printf("%c is not an alphabet.",convowel);

    return 0;
}
