// FOR LOOP

#include<stdio.h>

int main()
{
    int num, factorial = 1, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        factorial *= i;
    }
    printf("Factorial of number %d is %d", num, factorial);

    return 0;
}

// ---------------------------------------------------------------------------------------------------

// While Loop

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int num, factorial = 1, i;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     i = 1;
//     while (i <= num)
//     {
//         factorial *= i;  // factorial = factorial * i
//         i++;
//     }
//     printf("Factorial of number %d is %d", num, factorial);

//     return 0;
// }

