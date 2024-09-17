#include <stdio.h>

void main()
{
    float side1, side2, side3;
    printf("Enter the three sides of the triangle:\n");
    scanf("%f %f %f", &side1, &side2, &side3);

    if(side1==side2 && side2==side3) 
    {
        printf("Equilateral triangle.");
    }
    else if(side1==side2 || side1==side3 || side2==side3) 
    {
        printf("Isosceles triangle.");
    }
    else 
    {
        printf("Scalene triangle.");
    }
}