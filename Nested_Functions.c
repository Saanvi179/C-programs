#include <stdio.h>

// Function to count the number of digits in a number
int count(int sum) {
    int count = 0;
    if (sum == 0) return 1; // Special case for 0
    while (sum != 0) {
        sum /= 10;
        count++;
    }
    return count;
}

// Function to print the sum and call count() function
void printsum(int sum) {
    printf("The sum of the array elements is: %d\n", sum);
    int digits = count(sum);
    printf("The number of digits in the sum is: %d\n", digits);
}

// Function to compute the sum of elements in the array
void sum_array(int arr[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    printsum(sum); // Call printsum() to print the sum and digit count
}

int main() 
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the array\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    

    sum_array(arr, size); // Call sum_array() to start the process

    return 0;
}
