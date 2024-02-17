//  Call By Refrence
// When we call a function by its refrence(address), by changing formal argument actual arguments gets change.

#include <stdio.h>
void swapr(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
int main()
{
    int a = 10, b = 20;
    swapr(&a, &b);
    printf("a = %d b = %d\n", a, b);
    return 0;
}




// Call By Values.
// When we call a function by its value, by changing formal argument the actual argument do not get change

#include <stdio.h>
void swapv(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
    printf("a = %d b = %d\n", x, y); // its working becz of this printf
}
int main()
{
    int a = 10, b = 20;
    swapv(a, b);
    printf("a = %d b = %d\n", a, b);
    return 0;
}
