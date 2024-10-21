#include <stdio.h>

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n + sum(n-1);
    }
}

void main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    /* Sum of first n positive numbers using a basic for loop
    
    s= 0;
    for(int i=1; i<=n, i++)
    {
        s= s+i;
    }   
    
    */
    printf("Sum of first %d positive integers is %d", n, sum(n));
}