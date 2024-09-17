#include <stdio.h>

void main()
{
    int x, y;
    printf("Enter the x co-ordinate: ");
    scanf("%d",&x);
    printf("Enter the y co-ordinate: ");
    scanf("%d",&y);

    if(x>0 && y>0)
    {
        printf("The point is in the first quadrant");
    }
    else if(x<0 && y>0)
    {
        printf("The point is in the second quadrant");
    }
    else if(x<0 && y<0)
    {
        printf("The point is in the third quadrant");
    }
    else if(x>0 && y<0)
    {
        printf("The point is in the fourth quadrant");
    }
    else
    {
        printf("The point is the origin");
    }
}