#include <stdio.h>

struct book
{
    char name[25];
    int pages;
    float price;
};

void display(struct book b)
{
    printf("%s %d %.2f", b.name, b.pages, b.price);
}

int main()
{
    struct book b1 ={"Let Us See", 435, 355.60};
    display (b1);

    return 0;
}