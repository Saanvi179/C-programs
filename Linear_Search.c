#include <stdio.h>

int main()
{
    int n, target, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            printf("Element %d found at index %d.\n", target, i);
            found = 1;
            break;
        }
    }

    // If the element was not found
    if (!found)
    {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
