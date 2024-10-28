#include <stdio.h>

// Function to convert decimal to binary and print in reverse using recursion
void decimalToBinary(int n) {
    // Base case: when n is 0
    if (n == 0) {
        return;
    }
    
    // Recursive call for the higher bits
    decimalToBinary(n / 2);

    // Print the current bit (remainder)
    printf("%d", n % 2);
}

int main() {
    int num;

    // Reading a decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Edge case for 0
    if (num == 0) {
        printf("Binary: 0\n");
    } else {
        printf("Binary: ");
        decimalToBinary(num);  
        printf("\n");
    }

    return 0;
}
