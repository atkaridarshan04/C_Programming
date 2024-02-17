#include <stdio.h>
#include <stdlib.h> // for random number
#include <time.h>

int main()
{
    int randomNumber;
    srand(time(0));
    randomNumber = rand(); // prints any random number
    printf("%d", randomNumber);

    int randomNumber1;
    srand(time(0));
    randomNumber1 = rand() % 100 + 1; // This will generaterandom number from 1 to 100
    printf("%d", randomNumber1);

    // Similarly
    randomNumber = rand() % 200 + 1; // This will generaterandom number from 1 to 200

    randomNumber = rand() % 1000 + 1; // This will generaterandom number from 1 to 1000

    return 0;
}