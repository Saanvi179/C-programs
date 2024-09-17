#include <stdio.h>

void main()
{
    int a, b; 
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d",&a, &b);  
    getchar();  //since it will take only one char as input it consumes the new line hence no error appears
    printf("Enter the operator (+ - / * ):");
    scanf("%c",&op);

    switch (op)
    {
        case '+':
        printf("Sum of the numbers is: %d \n", a+b);
        break;

        case '-':
        printf("Difference between the numbers is: %d \n", a-b);
        break;

        case '*':
        printf("Product of the two numbers is: %d \n", a*b);
        break;

        case '/':
        if(b == 0)
        {
            printf("Division by zero is INVALID");
            break;
        } 
        else
        {
            printf("%d / %d is: %d \n", a, b, a/b);
        }
        break;

        default:
        printf("INVALID");
        break;
    }
}