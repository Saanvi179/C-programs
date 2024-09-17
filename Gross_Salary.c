#include <stdio.h>

void main()
{
    float basic_salary, hra, da;
    printf("Enter the basic salary of an employ: ");
    scanf("%f",&basic_salary);

    if(basic_salary<=10000)
    {
        hra= 0.2*basic_salary;
        da= 0.8*basic_salary;
    }
    else if(basic_salary<=20000)
    {
        hra= 0.25*basic_salary;
        da= 0.9*basic_salary;
    }
    else 
    {
        hra= 0.3*basic_salary;
        da= 0.95*basic_salary;
    }

    float gross= basic_salary+hra+da;
    printf("Gross Salary of the Employee is %.2f",gross);
}