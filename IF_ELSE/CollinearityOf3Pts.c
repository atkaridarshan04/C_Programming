#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, x3, y1, y2, y3;
    float s1, s2;

    printf("Enter Coordinates in the form of (x,y)");

    printf("\nEnter coordinates of pt.A: ");
    scanf("%f%f", &x1, &y1);

    printf("Enter coordinates of pt.B: ");
    scanf("%f%f", &x2, &y2);

    printf("Enter coordinates of pt.C: ");
    scanf("%f%f", &x3, &y3);

    s1 = (y2 - y1) / (x2 - x1) ; // slope of AB
    s2 = (y3 - y2) / (x3 - x2) ; // slope of BC

    if (s1 == s2)
    {
        printf("The pts. A, B and C are collinear.");
    }
    else
    {
        printf("The pts. A, B and C are not collinear.");
    }

    return 0;
}