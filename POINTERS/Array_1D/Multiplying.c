#include <stdio.h>

void modify(int *j)
{
    for (int i = 0; i < 10; i++)
    {
        *j *= 3;
        printf("%d\n", *j);
        j++;
    }
}
int main()
{
    int num[] = {1, 3, 4, 5, 2, 8, 6, 9, 0, 7};

    modify(&num[0]);

    return 0;
}