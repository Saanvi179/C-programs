//prints the sum of the first n+1 terms of the fibbonaci series

#include <stdio.h>

void main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0, sum=0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    sum= t1+t2;
    
    for (int i = 1; i <= n-1; i++) 
    {
        nextTerm = t1 + t2;
        sum= sum + nextTerm;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("Sum of first %d+1 terms of fibbonaci series is %d", n, sum);
}