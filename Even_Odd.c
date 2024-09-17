#include <stdio.h>

void main()
{
    int a;
    printf("Enter an integer: ");
    scanf("%d",&a);
    if(a==0)
    {
        printf("The number entered is zero");
    }
    else if(a%2 == 0)
    {
        printf("The number entered is even");
    }
    else
    {
        printf("The number entered is odd");
    }
}