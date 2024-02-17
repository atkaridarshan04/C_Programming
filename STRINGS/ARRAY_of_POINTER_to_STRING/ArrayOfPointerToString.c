//As seen is example.c we use a 2D string which have a problem that the bytes can go waste.
//To overcome this we use the Array of Pointer to string

//Array of pointer to string is prefered more than 2D array

#include<stdio.h>

int main()
{
    char *names[]={"Darshan","Atharva","Ronit"};

// by doing this we can save bytes

    return 0;
}