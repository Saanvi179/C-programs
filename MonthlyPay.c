#include <stdio.h>

void main()
{
    int monthly_pay, hours_worked, rate_per_hr, weeks_worked;
    printf("Enter the per hour pay: ");
    scanf("%d",&rate_per_hr);
    printf("Enter the number of hours worked per week: ");
    scanf("%d",&hours_worked);
    printf("Enter the number of weeks worked in the month: ");
    scanf("%d",&weeks_worked);
    
    monthly_pay= hours_worked * rate_per_hr * weeks_worked;
    printf("The monthly pay of the worker is: %d\n",monthly_pay);

}