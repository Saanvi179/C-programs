#include <stdio.h>

// Function to print the absolute value of a number
void absoluteValue(int x) {
    if (x < 0) {
        x = -x;  // Convert x to positive if it is negative
    }
    printf("The absolute value is: %d\n", x);
}

int main() {
    int num;

    // Reading an integer from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling the function to print the absolute value
    absoluteValue(num);

    return 0;
}
