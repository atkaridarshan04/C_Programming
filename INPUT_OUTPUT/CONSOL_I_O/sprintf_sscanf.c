// The sprintf( ) function works similar to the printf( ) function except for one small difference. Instead of sending the output to the screen as printf( ) does, this function writes the output to an array of characters.

#include <stdio.h>

int main()
{
    int i = 10;
    char ch = 'A';
    float a = 3.14;
    
    char str[20];

    printf("%d %c %f\n", i, ch, a);
    sprintf(str, "%d %c %f", i, ch, a);  // --> imp
    printf("%s\n", str);

    return 0;
}

// The counterpart of sprintf( ) is the sscanf( ) function. It allows us to read characters from a string and to convert and store them in C variables according to specified formats. The sscanf( ) function comes in handy for in-memory conversion of characters to values. You may find it convenient to read in strings from a file and then extract values from a string by using sscanf( ). The usage of sscanf( ) is same as scanf( ), except that the first argument is the string from which reading is to take place