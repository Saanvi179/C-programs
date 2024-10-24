#include <stdio.h>

int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    else if (n==1)
    {
        return 1;
    }
    
    else
    {
        return n*factorial(n-1);
    }
}

void main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial if %d is %d", n, factorial(n));
}