#include <stdio.h>

void main()
{
    int arr [5][5];
    int i, j;
    int sum=0;
    printf("Enter values to the matrix:\n ");
    for ( i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            scanf("%d ", &arr[i][j]);
        }
        printf("\n");
    }
    printf("The matrix is \n");
    for (i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j < 5; j++) 
        {
            if(i==j)
            {
                sum= sum+arr[i][j];
            }
        }
        printf("\n");
    }
    printf("The sum of diagonal elements is %d", sum);
}