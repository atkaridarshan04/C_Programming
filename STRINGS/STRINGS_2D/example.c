#include <stdio.h>
#include <string.h>
#define FOUND 1
#define NOTFOUND 0

int main()
{
    char names[5][15], yourname[15];
    int i, flag;

    printf("Enter the names to give entries:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%s", &names[i][0]);
    }

    printf("Enter your Name: ");
    scanf("%s", &yourname);

    flag = NOTFOUND;
    for (i = 0; i < 5; i++)
    {
        int a = strcmp(&names[i][0], yourname);

        if (a == 0)
        {
            printf("Welcome, You can enter.");
            flag = FOUND;
            break;
        }
    }
    if (flag == NOTFOUND)
    {
        printf("Sorry, You don't have entry here.");
    }
    
    return 0;
}