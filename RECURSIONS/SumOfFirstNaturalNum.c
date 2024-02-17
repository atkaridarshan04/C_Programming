#include <stdio.h>
int sumOfN(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num + sumOfN(num - 1);
    }
}

int main()
{
    int num;
    printf("Enter the nth number: ");
    scanf("%d", &num);

    int sum = sumOfN(num);
    printf("The sum of first %d numbers is %d", num, sum);

    return 0;
}