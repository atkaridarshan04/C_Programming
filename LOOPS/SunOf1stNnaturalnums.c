// BY USING WHILE LOOP

#include<stdio.h>
#include<math.h>

int main()
{
    int num, i, sum=0;

    printf("Enter the nth natural number: ");
    scanf("%d", &num);

    i = 1;
    while (i <= num) {
        sum += i;
        i++;
    }
    printf("The sum of first %d natural numbers is %d", num, sum);
    return 0;
}

// ---------------------------------------------------------------------------------------------------

// BY USING FOR LOOP

#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum = 0;

    printf("Enter the nth natural number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }

    printf("The sum of first %d natural numbers is %d", num, sum);

    return 0;
}

// ---------------------------------------------------------------------------------------------------

// BY USING DO WHILE LOOP

#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum = 0, i;

    printf("Enter the nth natural number: ");
    scanf("%d", &num);

    i = 1;
    do
    {
        sum += i;
        i++;
    } while (i <= num);

    printf("The sum of first %d natural numbers is %d", num, sum);

    return 0;
}
