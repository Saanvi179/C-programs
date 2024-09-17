#include <stdio.h>

void main()
{
    char alph;
    printf("Enter an alphabet: ");
    scanf("%c",&alph);

    if(alph=='a' || alph=='A' || alph=='e' || alph=='E' || alph=='i' || alph=='I' || alph=='o' || alph=='O' || alph=='u' || alph=='U')
    {
        printf("The alphabet entered is a vowel");
    }
    else
    {
        printf("The alphabet entered is not a vowel");
    }
}