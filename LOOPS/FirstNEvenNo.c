#include <stdio.h>

int main()
{
    int num, i=1;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num)
    {   
        int k = i * 2;
        printf("%d\n", k);
        i++;
    }
    return 0;
}