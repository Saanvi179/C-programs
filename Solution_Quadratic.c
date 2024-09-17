#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c;
    float root1, root2;
    float discriminant;
    
    printf("Enter the coefficents in the quadratic equation:\n");
    scanf("%f %f %f", &a, &b, &c);

    discriminant= (b*b)*(4*a*c);

    if(discriminant>0)
    {
        root1= (-b + sqrt(discriminant))/(2*a);
        root2= (-b - sqrt(discriminant))/(2*a);
        printf("The two distinct and real roots are %.2f and %.2f",root1, root2);
    }
    else if(discriminant == 0)
    {
        root1= root2= -b/(2*a);
        printf("The two equal and real roots are %.2f and %.2f", root1, root2);
    }
    else if(discriminant<0)
    {
        printf("The solution is imaginary");
    }
}
