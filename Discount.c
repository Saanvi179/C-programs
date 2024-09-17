#include <stdio.h>

void main()
{
    float amt, discount;
    printf("Enter the purchase amount: ");
    scanf("%f",&amt);

    if(amt<1000)
    {
        discount= 0.05*amt;
        printf("You get a discount of %.2f on the purchase of %.2f",discount, amt);
    }
    else if(amt<5000)
    {
        discount= 0.1*amt;
        printf("You get a discount of %.2f on the purchase of %.2f",discount, amt);
    }
    else
    {
        discount= 0.2*amt;
        printf("You get a discount of %.2f on the purchase of %.2f",discount, amt);
    }
}