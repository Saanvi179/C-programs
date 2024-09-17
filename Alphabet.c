#include <stdio.h>

void main()
{
    char var;
    printf("Enter a character: ");
    scanf("%c",&var);

    if((var >= 'a' && var <= 'z') || (var >= 'A' && var <= 'Z'))
    {
        printf("Character is an aplhabet.");
    }
    else
    {
        printf("Character is not an alphabet.");
    }
}