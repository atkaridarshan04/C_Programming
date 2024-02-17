#include <stdio.h>

int main()
{
    int a = 10, b = 9;
    int c = (a > b) ? (a - b) : (b - a);
    printf("%d", c);

    return 0;
}

// c = (a>b) ? (a-b) : (b-1)
/*
i.e
if (a > b)
{
    int c = a - b;
}
else
{
    c = b - a;
}
*/