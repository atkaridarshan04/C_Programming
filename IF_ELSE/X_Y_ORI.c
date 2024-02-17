#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;

    printf("Enter cordinates of a pt as (x,y): ");
    scanf("%d%d", &x, &y);

    if ((x > 0 || x < 0) && y == 0)
    {
        printf("The pt. (%d,%d) lies on X-axis", x, y);
    }
    else if ((y > 0 || y < 0) && x == 0)
    {
        printf("The pt. (%d,%d) lies on Y-axis", x, y);
    }
    else if (x == 0 && y == 0)
    {
        printf("The pt. (%d,%d) lies on Origin", x, y);
    }
    else
    {
        printf("The pt. (%d,%d) do not lies on x-axis, y-axis and origin", x, y);
    }

    return 0;
}