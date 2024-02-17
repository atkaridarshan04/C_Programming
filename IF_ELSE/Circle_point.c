#include <stdio.h>
#include <math.h>

int main()
{
    float xc = 0, yc = 0, x, y, r = 10, d;

    printf("The radius of circle is %f", r);

    printf("\nEnter Cordinates of a point as (x,y): ");
    scanf("%f%f", &x, &y);

    d = sqrt((pow(x, 2) - pow(xc, 2)) + (pow(y, 2) - pow(yc, 2)));
    printf("The distance betn the pt. and circle is %f \n", d);

    if (d == r)
    {
        printf("The pt. (%f,%f) lies on the circle.", x,y);
    }
    else if (d > r)
    {
        printf("The pt. (%f,%f) lies outside the circle.", x,y);
    }
    else if (d < r)
    {
        printf("The pt. (%f,%f) lies inside the circle.", x,y);
    }
    return 0;
}