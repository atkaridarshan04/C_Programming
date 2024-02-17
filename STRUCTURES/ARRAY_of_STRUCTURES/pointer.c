#include <stdio.h>

int main()
{
    struct book
    {
        char name[20];
        char author[20];
        int callno;
    };
    struct book b = {"Let us SEE", "Robort", 1001};

    struct book *ptr; // structure pointer
    ptr = &b;

    printf("Name = %s \t Author = %s \t CallNo = %d \n", b.name, b.author, b.callno);
    printf("Name = %s \t Author = %s \t CallNo = %d \n", ptr->name, ptr->author, ptr->callno);
    printf("Name = %s \t Author = %s \t CallNo = %d ", (*ptr).name, (*ptr).author, (*ptr).callno);

    return 0;
}

// one more example

// #include <stdio.h>
// struct virus
// {
//     char signature[25];
//     char status[20];
//     int size;
// } v[2] = {
//     "Yankee Doodle", "Deadly", 1813,
//     "Dark Avenger", "Killer", 1795};

// int main()
// {
//     int i;
//     for (i = 0; i <= 1; i++)
//         printf("%s %s\n", v->signature, v->status);

//     return 0;
// }