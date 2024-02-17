#include <stdio.h>

int main()
{   
    // Pointer is  a variable that stores address of another variable

    // & - containing the address of value
    // * - value at address
    // j points to i means j is storing value of i.

    int i = 1, *j, **k;  

    int *alpha;     
    char *ch;       // These are pointer variables 
    float *s;       

    // int *c [10] --> is a array of pointer
    // int (*c)[10] --> is a pointer to array

    // float *s means s is going to contain the adress of a floating point value, and not the value of a floating point number
    // similar for char and int

    j = &i;
    k = &j;

    printf("The value of i = %d\n", i);
    printf("The value of i = %d\n", *j); 
    printf("The value of i = %d\n", *(&i));   // *(&i) = *j
    printf("The value of i = %d\n\n", **k);
   
    printf("The address of i = %u\n", &i);  // &i = j
    printf("The address of i = %d\n", *(&j));
    printf("The address of i = %d\n\n", *k);

    printf("The value of j = %d\n", j);
    printf("The value of j = %d\n\n", *k);

    printf("The address of j = %u\n", &j);
    printf("The address of j = %u\n\n", *(&k));

    printf("The value of k = %d\n\n", k);
    
    printf("The address of k = %u\n", &k);

    return 0;
}   

//When we call a function by its value, by changing formal argument the actual argument do not get change

//When we call a function by its refrence(address), by changing formal argument actual arguments gets change

// A word of caution! Do not attempt the following operations on 
// pointers... they would never work out.
// (a) Addition of two pointers
// (b) Multiplication of a pointer with a constant
// (c) Division of a pointer with a constant
