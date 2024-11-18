#include <stdio.h>

void main()
{
    int arr[3][3];
    printf("Enter elements to the matrix: ");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The even numbers are: ");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]%2==0)
            {
                printf("%d ",arr[i][j]);
            }
        }
    }
    printf("\n");
    printf("The odd numbers are: ");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]%2!=0)
            {
                printf("%d ",arr[i][j]);
            }
        }
    }
}