// scanf have limitations that it cannot take input as [ Darshan Atkari ] becz of space betn it 
// This can be overcome by using gets
// Also 'gets' functon gets a new line automatically

#include <stdio.h>
int main()
{
    char footballer[40];
    puts("Enter name");
    gets(footballer); /* sends base address of array */   
    puts("Happy footballing!");
    puts(footballer);
    return 0;
}


// puts can output only one string at a time
// similarly gets can also read only one string at a time