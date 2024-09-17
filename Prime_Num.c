#include <stdio.h>
#include <math.h>

void main()
{
    int n, k=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        if(n%i == 0)
        k++;
    }

    if(k>2)
    {
        printf("It is not a prime number");
    }
    else
    {
        printf("It is a prime number");
    }
}