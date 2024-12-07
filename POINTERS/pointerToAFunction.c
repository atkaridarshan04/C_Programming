// Invoking function using a pointer to a function

#include <stdio.h>
void display()
{
    puts("Hello There.");
}

int main()
{
    void (*fun_ptr)(); // pointer to a function
    fun_ptr = display; /* assign address of function */

    printf("Address of function display is %u\n", fun_ptr);
    printf("Address of function display is %u\n", display);

    (*fun_ptr)(); /* invokes the function display( ) */

    return 0;
}