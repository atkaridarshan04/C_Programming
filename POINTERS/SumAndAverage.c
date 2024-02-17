#include <stdio.h>

 // void function cannot directly return value but can indirectly reutrns it
void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}

int main()
{
    int a = 6, b = 3;
    int sum;
    float avg;

    sumAndAvg(a, b, &sum, &avg);

    printf("The sum and average of 6 and 3 is %d and %.2f", sum, avg);

    return 0;
}

