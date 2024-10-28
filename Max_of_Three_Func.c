#include <stdio.h>

int findMax(int num1, int num2, int num3) 
{
    int max = num1;  // Assume the first number is the largest initially

    // Compare max with the second number
    if (num2 > max) 
    {
        max = num2;
    }

    // Compare max with the third number
    if (num3 > max) 
    {
        max = num3;
    }

    return max;  // Return the largest number
}

int main() 
{
    int a, b, c;

    // Taking input for three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = findMax(a, b, c);
    printf("The maximum of the three numbers is: %d\n", max);

    return 0;
}
