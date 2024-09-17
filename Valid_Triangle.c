#include <stdio.h>

void main()
{
    float angle1, angle2, angle3;
    printf("Enter the angles of the triangle:\n");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    float total_angle= angle1 + angle2 + angle3;

    if (total_angle == 180.0)
    {
        printf("Yes, the triangle is valid.");
    }
    else
    {
        printf("No, the triangle is nto valid.");
    }
}