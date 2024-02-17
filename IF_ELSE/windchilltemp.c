#include<stdio.h>
#include<math.h>

int main()
{
    float t, v, wcf;

    printf("Enter Temperature: \n");
    scanf("%f", &t); 

    printf("Enter Velocity: \n");
    scanf("%f", &v);

    wcf = 35.74 + (0.6215*t) + ((0.4275*t) - 35.75) * pow(v,0.16) ;

    if (wcf < t)
    printf("The winnd chill factor is %f", wcf); 
    else 
    printf("The entered temp is greater than wcf");
    
    return 0;
}