# include <stdio.h>

int power(int a, int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return a*power(a,n-1);
    }
}

void main()
{
    int a, n;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &n);
    printf("%d^%d is %d", a, n, power(a,n)); 
}