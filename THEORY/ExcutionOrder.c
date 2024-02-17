#include<stdio.h>

int main()
{
    int a = 3;
    printf("%d %d %d", a, ++a, a++);  // it runs from right to left because of GCC compiler
    // in some compliers it may run from left to right 
    
    return 0;
}