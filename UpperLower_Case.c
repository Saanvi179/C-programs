#include <stdio.h>

void main()
{
    char ch;
    printf("Enter a letter: ");
    scanf("%c",&ch);

    if(ch>= 'a' && ch<= 'z')
    {
        printf("The letter is in Lower Case");
    }
    else if(ch>= 'A' && ch<= 'Z')
    {
        printf("The letter is in Upper Case");
    }
    else
    {
        printf("The character is not a letter");
    }
}