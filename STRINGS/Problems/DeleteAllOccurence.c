// Write a c program to Delete all occurrences of Character from the String.
// Test case: Computer_engineering
// Enter character to delete: e
// Output: Computr_nginring

#include <stdio.h>

void myFun(char *ptr, char ch)
{   

    while (*ptr != '\0')
    {   
        if (*ptr == ch || *ptr == ch + 32 || *ptr == ch - 32)
        {
           printf("");
        }
        else{
            printf("%c", *ptr);
        }
        ptr++;
    }
  *ptr = '\0';
}

int main()
{
    char ch;
    char str[] = "Computer_Engineering";
    printf("Enter the character: ");
    scanf("%c", &ch);

    myFun(str, ch);

    return 0;
}
