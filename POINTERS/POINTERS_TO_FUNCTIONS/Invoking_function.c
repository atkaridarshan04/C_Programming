// Invoking function using a pointer to a function

#include <stdio.h>
void display()
{
    puts("Hello There.");
}
int main()
{
    void (*fun_ptr)();
    fun_ptr = display; /* assign address of function */
    printf("Address of function display is %u\n", fun_ptr);
    (*fun_ptr)(); /* invokes the function display( ) */

    return 0;
}