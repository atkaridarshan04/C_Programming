#include <stdio.h>
#include "areaperi.h"

int main()
{
    double triangle_area = TRIANGLE_AREA(5, 7);
    double triangle_perimeter = TRIANGLE_PERIMETER(3, 4, 5);

    double square_area = SQUARE_AREA(6);
    double square_perimeter = SQUARE_PERIMETER(6);

    double circle_area = CIRCLE_AREA(4);
    double circle_perimeter = CIRCLE_PERIMETER(4);

    printf("Triangle - Area: %.2f, Perimeter: %.2f\n", triangle_area, triangle_perimeter);
    printf("Square - Area: %.2f, Perimeter: %.2f\n", square_area, square_perimeter);
    printf("Circle - Area: %.2f, Perimeter: %.2f\n", circle_area, circle_perimeter);

    return 0;
}
