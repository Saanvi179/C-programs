#include <stdio.h>

void main()
{
    float temp_celsius, temp_farenheit;
    printf("Enter temperature in Farenheit: ");
    scanf("%f",&temp_farenheit);
    temp_celsius= (temp_farenheit - 32)* 5/9;
    printf("Temperature in Celsius scale is %.2f",temp_celsius);
}