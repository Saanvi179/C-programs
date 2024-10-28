#include <stdio.h>

// Recursive function to find the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 0) {
        return 0; // Base case: Fibonacci of 0 is 0
    } else if (n == 1) {
        return 1; // Base case: Fibonacci of 1 is 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}

int main() {
    int terms;

    // Reading the number of terms in the Fibonacci series
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    // Printing the Fibonacci series
    printf("Fibonacci Series: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i)); // Call the fibonacci function
    }
    printf("\n");

    return 0;
}
