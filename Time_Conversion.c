#include <stdio.h>

void main()
{
    int seconds;
    printf("Enter time in second: ");
    scanf("%d",&seconds);
    int minutes= seconds/60;
    int hours= minutes/60;
    printf("Time in minutes is: %d\n",minutes);
    printf("Time in hours is: %d\n",hours);
}