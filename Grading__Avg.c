#include <stdio.h>

void main()
{
    float avg;
    printf("Enter the average marks: ");
    scanf("%f",&avg);
    
    if(avg>=90)
    {
        printf("\nGrade: A");
    }
    else if(avg>=80)
    {
        printf("\nGrade: B");
    }
    else if(avg>=70)
    {
        printf("\nGrade: C");
    }
    else if(avg>=60)
    {
        printf("\nGrade: D");
    }
    else if(avg>=40)
    {
        printf("\nGrade: E");
    }
    else
    {
        printf("\nGrade: F");
    }
}