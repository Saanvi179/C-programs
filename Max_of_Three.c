#include <stdio.h>

void main()
{
    int a, b, c, max=0;
    printf("Enter three terms: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b)
    {
        max=a;
    }
    else 
    {
        max=b;
    }

    if(max>c)
    {
        printf("%d is the maximum term\n",max);
    }
    else
    {
        printf("%d is the maximum term\n",c);
    }
}