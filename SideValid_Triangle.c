#include <stdio.h>

void main()
{
    float side1, side2, side3;
    printf("Enter the three sides of a triangle:\n");
    scanf("%f %f %f", &side1, &side2, &side3);

    if((side1 + side2) > side3)
    {
        if((side2 + side3) > side1)
        {
            if((side1 + side3) > side2) 
            {
                printf("Triangle is valid.");
            }
            else
            {
                printf("Triangle is not valid.");
            }
        }
        else
        {
            printf("Triangle is not valid.");
        }
    }
    else
    {
        printf("Triangle is not valid.");
    }
}