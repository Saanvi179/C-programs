#include<stdio.h>

int sumfib(int x); // Function prototype

void main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Fibonacci sum up to %d terms is: %d\n", x, sumfib(x));
}

int sumfib(int x)
{
    int sum = 0;
    int a = 0, b = 1, temp;

    if(x == 1)
        return a;  // Return 0 if only the first term
    else if(x == 2)
        return a + b; // Return sum of first two terms
    
    sum = a + b; // Initialize with the sum of the first two terms

    // Loop to calculate the Fibonacci series sum
    for(int i = 3; i <= x; i++)
    {
        temp = a + b;
        sum += temp;
        a = b;
        b = temp;
    }

    return sum;
}
