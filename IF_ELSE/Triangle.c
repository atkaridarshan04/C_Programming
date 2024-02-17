#include <stdio.h>
#include <math.h>   // imp to add this 

int main() 
{
    int len1, len2, len3;
    float sp; // semiperimeter
    float area;

    printf("Enter length 1 of triangle:");
    scanf("%d\n", &len1);

    printf("Enter length 2 of triangle:");
    scanf("%d\n", &len2);

    printf("Enter length 3 of triangle:");
    scanf("%d\n", &len3);

    // Using Herons Formula
    sp = (len1 + len2 + len3) / 2;
    area = sqrt(sp * (sp - len1) * (sp - len2) * (sp - len3));  // sqrt = square root

    // Checking whether the triangle is valid or not
    if (len1 + len2 > len3 && len2 + len3 > len1 && len1 + len3 > len2) {
    printf("The area of triangle is %f", area);
    } 
    else {
    printf("These lengths do not form a valid triangle");
    }

    return 0;
}