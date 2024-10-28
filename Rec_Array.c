#include <stdio.h>

// Recursive function to print array elements
void printArray(int arr[], int size, int index) {
    if (index < size) {
        printf("%d ", arr[index]); // Print current element
        printArray(arr, size, index + 1); // Recursive call for the next element
    }
}

int main() {
    
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing the array elements using recursion
    printf("Array elements: ");
    printArray(arr, size, 0); // Start from index 0
    printf("\n");

    return 0;
}
