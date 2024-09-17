#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a, &b);
    if(a>b)
    {
        printf("%d is the maximum term\n",a);
    }
    else
    {
        printf("%d is the maximum term\n",b);
    }
}