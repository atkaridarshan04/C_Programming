#include <stdio.h>
#include <math.h>

int main()
{
    int a1, a2, a3;

    printf("Preson1: Enter your age ");
    scanf("%d", &a1);

    printf("Preson2: Enter your age ");
    scanf("%d", &a2);

    printf("Preson3: Enter your age ");
    scanf("%d", &a3);

    if (a1 > a2 && a1 > a3)
    {
        printf("Age of Person 1 is greatest");
    }
    else if (a2 > a3 && a2 > a3)
    {
        printf("Age of Person 2 is greatest");
    }
    else
    {
        printf("Age of Person 3 is greatest");
    }
    return 0;
}