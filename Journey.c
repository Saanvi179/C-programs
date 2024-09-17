#include <stdio.h>

void main()
{
    const float distance = 1420.0;
    float fuel_efficiency, fuel_cost_per_liter, average_speed;

    printf("Enter your vehicle's fuel efficiency in km/h: ");
    scanf("%f",&fuel_efficiency);

    printf("Enter the current cost of the fuel in /liter: ");
    scanf("%f",&fuel_cost_per_liter);

    printf("Enter your expected average speed during the journey: ");
    scanf("%f",&average_speed);
    
    float total_fuel_needed= distance/fuel_efficiency;
    float total_fuel_cost= total_fuel_needed * fuel_cost_per_liter;

    float total_time= distance/average_speed;

    printf("\nThe distance between Delhi and Mumbai is %.2f km\n",distance);
    printf("The fuel required for the journey is %.2f liters\n",total_fuel_needed);
    printf("The cost of fuel for the journey is  %.2f rupees\n",total_fuel_cost);
    printf("The estimated time of the journey is %.2f hours",total_time);

}