// Passing address of structure variable to function

#include <stdio.h>
struct book
{
    char name[20];
    char author[20];
    int pages;
};

void display(struct book *b)
{
    printf("%s %s %d\n", b->name, b->author, b->pages);
}

int main()
{
    struct book b = {"Let Us See","Robert",456};
    display(&b);

    return 0;
}