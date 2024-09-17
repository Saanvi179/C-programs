#include <stdio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num%5 == 0 && num%11 == 0)
    {
        printf("The number is divisible by 5 and 11\n");
    }
    else if(num%11 == 0)
    {
        printf("The number is divisible by 11\n");
    }
    else if(num%5 == 0)
    {
        printf("The number is divisible by 5\n");
    }
    else
    {
        printf("The number is neither divisible by 5 nor 11");
    }
}