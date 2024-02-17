//Use to calculate length the length of string

#include <stdio.h>
#include <string.h>

int main()
{
    char arr[] = "Valorant";
    int len1, len2;

    len1 = strlen(arr);
    len2 = strlen("Darshan");

    printf("string = %s length = %d\n", arr, len1);
    printf("string = %s length = %d\n", "Darshan", len2);

    return 0;
}