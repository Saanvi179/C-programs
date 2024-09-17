#include <stdio.h>

void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

     if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    {
        printf("'%c' is vowel.\nYou get 5 points", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is number.\nYou get 10 points", ch);
    }
    else 
    {
        printf("'%c' gives you zero points.", ch);
    }
}
