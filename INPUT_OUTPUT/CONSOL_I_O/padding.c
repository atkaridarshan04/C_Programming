// For intergers
#include <stdio.h>
int main()
{
    int weight = 63;
    printf("weight is %d kg\n", weight);
    printf("weight is %2d kg\n", weight);
    printf("weight is %4d kg\n", weight);
    printf("weight is %6d kg\n", weight);
    printf("weight is %-6d kg\n", weight);
    printf("weight is %1d kg\n", weight);
    return 0;
}

// The numbers between % and d are the number of columns they are lefting
// The +ve nos. indicate padding from left while -ve nos. indicate the padding form right

// Similarly for floating values
#include <stdio.h>
int main()
{
    printf("%10.1f %10.1f %10.1f\n", 5.0, 13.5, 133.9);
    printf("%10.1f %10.1f %10.1f\n", 305.0, 1200.9, 3005.3);
    return 0;
}

// And similar for Strings
#include <stdio.h>
int main()
{
    char firstname1[] = "Sandy";
    char surname1[] = "Malya";
    char firstname2[] = "AjayKumar";
    char surname2[] = "Gurubaxani";
    
    printf("%20s%20s\n", firstname1, surname1);
    printf("%20s%20s\n", firstname2, surname2);

    return 0;
}