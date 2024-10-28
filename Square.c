#include<stdio.h>

int square(int x)
{
 return (x*x);
}

int main()
{
 int num, res;
 printf("Enter a number\n");
 scanf("%d", &num);
 res=square(num);
 printf("Square of %d is %d", num, res);
}
