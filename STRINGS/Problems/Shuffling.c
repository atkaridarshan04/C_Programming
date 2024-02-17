// You are given a string s and an integer array index of the same length. The string s will be 
// shuffled such that the character at the ith position moves to indices[i] in the shuffled string.
// Return the shuffled string.

// Test Cases:
// Input: s = "codeleet", indices = [4,5,6,7,0,2,1,3]
// Output: "leetcode"
// Explanation: As shown, "codeleet" becomes "leetcode" after shuffling.


#include <stdio.h>
#include <string.h>

void restoreString(char s[], int indices[], int length)
{
    char shuffled[length + 1]; // +1 for null terminator
    shuffled[length] = '\0';   // Null terminator for the string

    // Iterate through the indices and place characters in the shuffled array
    for (int i = 0; i < length; i++)
    {
        shuffled[indices[i]] = s[i];
    }

    // Copy the shuffled array back to the original array
    strcpy(s, shuffled);
}

int main()
{
    char s[] = "codeleet";
    int indices[] = {4, 5, 6, 7, 0, 2, 1, 3};
    int length = strlen(s);

    restoreString(s, indices, length);

    printf("Shuffled String: %s\n", s);

    return 0;
}
