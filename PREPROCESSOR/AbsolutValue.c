// Example of Macros Expansion

#include <stdio.h>
#define ABSOLUTEVALUE(num)                                 \
    {                                                      \
        if (num < 0)                                       \
        {                                                  \
            num = -num;                                    \
        }                                                  \
        printf("The absolute of given number is %d", num); \
    }
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    ABSOLUTEVALUE(num)

    return 0;
}