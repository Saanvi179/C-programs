#include <stdio.h>

void main()
{
    int size, max;
    printf("Enter the size of hte array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter values in the array:\n ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max= arr[0];
}