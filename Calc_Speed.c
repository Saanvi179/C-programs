#include <stdio.h>

void main()
{
    int distance, time;
    printf("Enter total distance travelled: ");
    scanf("%d",&distance);
    printf("Enter the total time taken: ");
    scanf("%d",&time);

    float speed= distance/time;
    printf("The average speed of the journey is: %.2f",speed);
}
