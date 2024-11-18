#include <stdio.h>

// Recursive function to print the array elements
void printArray(int arr[], int size, int index) 
{
    if (index >= size) // Base case: if index reaches the size, stop recursion
        return;
    
    printf("%d ", arr[index]);
    
    printArray(arr, size, index+1);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements are: ");
    printArray(arr, size, 0); // Start the recursion with index 0

    return 0;
}
