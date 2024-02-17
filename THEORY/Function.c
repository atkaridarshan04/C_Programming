#include <stdio.h>
void display(); // FUNCTION PROTOTYPE DECLARATION

int main()
{
    printf("HELLO THERE\n");
    display(); // FUNCTION CALL
    printf("Ohh !! nice\n");

    return 0;
}

void display() // FUNCTION DEFINITION
{
    printf("I am in Function Definition\n");
}