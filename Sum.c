//Function without aruguement without return type

#include <stdio.h>

void addNumbers() 
{
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("The sum is %d\n", sum);
}

void main() 
{
    addNumbers();

}


/*Function without aruguement with return type

#include <stdio.h>
int addNumbers() 
{
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    return sum;
}

void main() 
{
    printf("The sum is %d", addNumbers());

}

Function with aruguement without return type

#include <stdio.h>
void addNumbers(int num1, int num2) 
{
    int sum = num1 + num2;
    printf("The sum is %d", sum);
}

void main() 
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    addNumbers(num1, num2);
}


Function with aruguement with return type

#include <stdio.h>
int addNumbers(int num1, int num2) 
{
    int sum;
    sum = num1 + num2;
    return sum;
}

void main() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("The sum is %d", addNumbers(num1, num2));

}*/

