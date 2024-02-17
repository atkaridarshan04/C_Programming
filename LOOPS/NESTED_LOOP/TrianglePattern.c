#include <stdio.h>

int main()
{
    int n;
    printf("Enter no. of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }

        for (int j = n; j > i; j--)
        {
            printf("*");
        }

        for (int j = n; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


// For Reverse of this 

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter no. of rows: ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = n; j >= i; j--)
//         {
//             printf(" ");
//         }

//         for (int j = 0; j <= i; j++)
//         {
//             printf("*");
//         }

//         for (int j = 0; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }