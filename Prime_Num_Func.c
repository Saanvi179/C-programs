#include <stdio.h>

// Function to check if a number is prime
void isPrime(int n) {
    int count = 0;  // Counter for the number of factors

    // Check for factors from 1 to n
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;  // Increment count for each factor found
        }
    }

    // A prime number has exactly two factors: 1 and itself
    if (count == 2) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
}

int main() {
    int num;

    // Reading a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling the function to check if the number is prime
    isPrime(num);

    return 0;
}
