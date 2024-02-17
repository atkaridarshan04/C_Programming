#include <fcntl.h>
#include <sys\\types.h>
#include <sys\\stat.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char buffer[512], soruce[128], target[128];
    int inhandel, outhandel, bytes;

    printf("Enter the soruce file name: ");
    gets(soruce);
    inhandel = open(soruce, O_RDONLY | O_BINARY);
    if (inhandel == -1)
    {
        printf("File not found.\n");
        exit(1);
    }

    printf("Enter the target file name: ");
    gets(target);
    outhandel = open(target, O_CREAT | O_BINARY | O_WRONLY, S_IWRITE);
    if (outhandel == -1)
    {
        printf("File not found.\n");
        exit(2);
    }

    while (1)
    {
        bytes = read(inhandel, buffer, 512); // The read( ) function takes three arguments. The first argument is the file handle, the second is the address of the buffer and the third is the maximum number of bytes we want to read.

        if (bytes > 1)
        {
            write(outhandel, buffer, 512);
        }
        else
        {
            break;
        }
    }

    close(inhandel);
    close(outhandel);

    return 0;
}