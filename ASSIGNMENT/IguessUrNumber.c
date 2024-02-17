#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lower_num = 1;
    int upper_num = 100;
    int computer_guess, user_reply;
    int guesses = 0;

    // Seed the random number generator with the current time
    srand(time(NULL));

    printf("Think of a number between %d and %d.\n", lower_num, upper_num);
    printf("Press 'C' if the computer's guess is correct.\n");
    printf("Press 'L' if your number is lower.\n");
    printf("Press 'H' if your number is higher.\n\n");

    do
    {
        // Generate a random guess by the computer within the specified range
        computer_guess = (rand() % (upper_num - lower_num + 1)) + lower_num;

        printf("Computer's guess: %d\n", computer_guess);

        // Ask the user for feedback
        printf("Your reply (L/H/C): ");
        user_reply = getchar();
        getchar(); // Consume the newline character

        if (user_reply == 'L')
        {
            upper_num = computer_guess - 1;
        }
        else if (user_reply == 'H')
        {
            lower_num = computer_guess + 1;
        }

        guesses++;
    } while (user_reply != 'C');

    printf("Computer guessed your number in %d guesses.\n", guesses);

    return 0;
}