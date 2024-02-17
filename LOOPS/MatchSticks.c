#include <stdio.h>

int main() {
    int matchsticks = 21;
    int user_pick, computer_pick;

    printf("Welcome to the Matchstick Game!\n");
    printf("Rules: You and the computer take turns picking 1, 2, 3, or 4 matchsticks.\n");
    printf("The player who is forced to pick the last matchstick loses.\n\n");

    while (matchsticks > 0) {
        // User's turn
        printf("Remaining matchsticks: %d\n", matchsticks);
        do {
            printf("Your turn. Pick 1, 2, 3, or 4 matchsticks: ");
            scanf("%d", &user_pick);
        } while (user_pick < 1 || user_pick > 4 || user_pick > matchsticks);

        matchsticks -= user_pick;
        printf("You picked %d matchstick(s). Remaining matchsticks: %d\n", user_pick, matchsticks);

        if (matchsticks == 0) {
            printf("You picked the last matchstick. Computer wins!\n");
            break;
        }

        // Computer's turn
        computer_pick = 5 - user_pick;
        printf("Computer's turn. Computer picks %d matchstick(s).\n", computer_pick);
        matchsticks -= computer_pick;

        if (matchsticks == 0) {
            printf("Computer picked the last matchstick. You win!\n");
            break;
        }
    }

    return 0;
}