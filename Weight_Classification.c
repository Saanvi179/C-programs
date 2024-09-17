#include <stdio.h>

void main()
{
    float bmi, weight, height;
    printf("Enter your weight (kg): ");
    scanf("%f",&weight);
    printf("Enter your height (m): ");
    scanf("%f",&height);
    
    bmi= weight/ (height*height);

    if(bmi<18.5)
    {
        printf("You are underweight");
    }
    else if(bmi<=24.9)
    {
        printf("You have normal weight");
    }
    else
    {
        printf("You are overweight");
    }
}