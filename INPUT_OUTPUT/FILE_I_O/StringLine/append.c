#include <stdio.h>
#include <stdlib.h>

int main() {
    char sourceFileName[100], destinationFileName[100];
    FILE *sourceFile, *destinationFile;
    char ch;

    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);

    printf("Enter the destination file name: ");
    scanf("%s", destinationFileName);

    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error opening the source file.\n");
        exit(1);
    }

    destinationFile = fopen(destinationFileName, "a");
    if (destinationFile == NULL) {
        printf("Error opening the destination file.\n");
        fclose(sourceFile);
        exit(1);
    }

    // Copy the contents of the source file to the destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("Contents of '%s' have been appended to '%s'.\n", sourceFileName, destinationFileName);

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
