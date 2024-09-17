#include <stdio.h>

void main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("Yes, you are eligible to vote");
    }
    else
    {
        printf("No, you are not eligible to vote");
    }
}