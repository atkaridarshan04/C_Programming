// Lest us see page no. 396

#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    printf("Press any key to continue");
    getch(); /* will not echo the character */

    printf("\nType any character");
    ch = getche(); /* will echo the character typed */

    printf("\nType any character");
    getchar(); /* will echo character, must be followed by enter key */
    
    printf("\nContinue Y/N");
    fgetchar(); /* will echo character, must be followed by enter key */

    return 0;
}
