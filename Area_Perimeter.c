#include <stdio.h>

int area(int s)
{
    return s*s;
}

int perimeter(int s)
{
    return 4*s;
}

void main()
{
    int s;
    printf("Enter the length of side of square: ");
    scanf("%d", &s);

    printf("Perimeter of the square is %d m\n", perimeter(s));
    printf("Area of the square is %d m^2", area(s));
}