//prints sum of series 1 - x + x^2 - x^3 + x^4 + ..... + ((-1)^n)*(x^n)

#include <stdio.h>
#include <math.h>

int main() 
{
    int n;
    float x, sum = 0, term;

    // Taking input from the user
    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to calculate the sum of the series
    for (int i = 0; i <= n; i++) 
    {
        term = pow(-1, i)*pow(x, i); // Calculate each term (-1)^i * x^i
        sum = sum + term;
    }

    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}