#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    int guesses = 0;
    int userguess;

    do
    {
        printf("Enter a number to guess: ");
        scanf("%d", &userguess);

        if (userguess > randomNumber)
        {
            printf("Enter a smaller Number.\n");
        }
        else if (userguess < randomNumber)
        {
            printf("Enter a larger number.\n");
        }
        else
        {
            printf("Congratulations!! Your guess is Correct. You guessed right in %d guesses.\n", guesses);
        }

        guesses += 1;

    } while (userguess != randomNumber);

    return 0;
}
