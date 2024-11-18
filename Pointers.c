#include <stdio.h>

void main()
{
    int arr[2]={2,3};
    int i= arr[0];
    int *j= &arr[0];
    printf("i= %d\n", i);
    printf("&i= %d\n", &i);
    printf("j= %d\n", j);
    printf("*j= %d", *j);
}