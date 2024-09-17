#include <stdio.h>

void main()
{
    float max, phy, chem, math, bio, comp, total_marks, percent;
    printf("Enter the maximum marks: ");
    scanf("%f",&max);
    printf("\nEnter marks for the following\n");
    printf("Physics: ");
    scanf("%f",&phy);
    printf("Chemistry: ");
    scanf("%f",&chem);
    printf("Mathematics: ");
    scanf("%f",&math);
    printf("Biology: ");
    scanf("%f",&bio);
    printf("Computer: ");
    scanf("%f",&comp);

    total_marks= phy+chem+math+bio+comp;
    percent= (total_marks/(max*5))*100;

    if(percent>=90)
    {
        printf("\nGrade: A");
    }
    else if(percent>=80)
    {
        printf("\nGrade: B");
    }
    else if(percent>=70)
    {
        printf("\nGrade: C");
    }
    else if(percent>=60)
    {
        printf("\nGrade: D");
    }
    else if(percent>=40)
    {
        printf("\nGrade: E");
    }
    else
    {
        printf("\nGrade: F");
    }
}