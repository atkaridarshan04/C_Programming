#include <stdio.h> 

int shiftRight(int *a, int *b, int *c) // call by refrence
{
    int t = *c;     // to shift from left to right
    *c = *b;            //int t = *a;
    *b = *a;            //    *a = *b;
    *a = t;             //    *b = *c;
}                       //    *c = t; 
                         
int main()
{
    int a = 1, b = 2, c = 3;

    shiftRight(&a, &b, &c);

    printf("a=%d, b=%d, c=%d", a, b, c);

    return 0;
}