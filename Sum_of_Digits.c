#include <stdio.h>

int sum=0;

int sumofdigits(int n)
{
    if(n>0)
    {
        sumofdigits(n/10);
    }
    if(n==0)
    {
        return sum;
    }
    sum=sum+(n%10);
}

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The sum of the digits of %d is %d", n, sumofdigits(n));
}