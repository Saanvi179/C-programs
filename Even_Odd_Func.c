#include <stdio.h>

// Function to check if the number is even or odd
void evenOdd(int x) {
    if (x % 2 == 0) {
        printf("%d is even.\n", x);
    } else {
        printf("%d is odd.\n", x);
    }
}

int main() {
    int num;

    // Reading an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calling the function evenOdd with the integer
    evenOdd(num);

    return 0;
}
