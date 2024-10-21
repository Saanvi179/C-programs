/*

Program for a calculator using void functions without parameters

 #include <stdio.h>

// Function to perform addition
void add() 
{
    float a, b;
    printf("Enter two numbers to add: ");
    scanf("%f %f", &a, &b);
    printf("The result is: %.2f\n", a + b);
}

// Function to perform subtraction
void subtract() 
{
    float a, b;
    printf("Enter two numbers to subtract: ");
    scanf("%f %f", &a, &b);
    printf("The result is: %.2f\n", a - b);
}

// Function to perform multiplication
void multiply() 
{
    float a, b;
    printf("Enter two numbers to multiply: ");
    scanf("%f %f", &a, &b);
    printf("The result is: %.2f\n", a * b);
}

// Function to perform division
void divide() 
{
    float a, b;
    printf("Enter two numbers to divide: ");
    scanf("%f %f", &a, &b);
    if(b != 0) {
        printf("The result is: %.2f\n", a / b);
    } else {
        printf("Error! Division by zero.\n");
    }
}

// Main function to select and call the operation
int main()
{
    int choice;
    
    printf("Select operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter choice (1/2/3/4): ");
    scanf("%d", &choice);

    // Call the appropriate function based on the user's choice
    switch(choice) {
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}
*/


// Program for a calculator using float functions and parameters

#include <stdio.h>

// Function to perform addition
float add(float a, float b) 
{
    return a+b;
}
    
// Function to perform subtraction
float subtract(float a, float b) 
{
    return a*b;
}

// Function to perform multiplication
float multiply(float a , float b) 
{
    return a*b;
}

// Function to perform division
float divide(float a, float b) 
{
    if(b != 0) 
    {
        return a/b;
    } else 
    {
        
        return 0;
    }
}

// Main function to select and call the operation
int main()
{
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f",&a ,&b);

    int choice; 
    printf("Select operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter choice (1/2/3/4): ");
    scanf("%d", &choice);

    // Call the appropriate function based on the user's choice
    switch(choice) {
        case 1:
            printf("Sum of the numbers is %.2f", add(a,b));
            break;
        case 2:
            printf("Difference between the two numbers is %.2f", subtract(a,b));
            break;
        case 3:
            printf("Product of the two numbers is %.2f", multiply(a,b));
            break;
        case 4:
            if (b==0)
            {
                printf("Error! Division by zero.\n");
            }
            else
            {
                printf("The quotient of this division is %.2f", divide(a,b));
            }
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}
