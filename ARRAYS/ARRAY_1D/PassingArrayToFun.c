#include <stdio.h>
void display(int *);

int main()
{
    int num[] = {24, 34, 12, 44, 56, 17};
    display(&num[0]);   // num[0] = num (base adddress)
    return 0;
}
void display(int *j)
{
    for (int i = 0; i <= 5; i++)
    {
        printf("Element = %d\n", *j);
        j++; /* increment pointer to point to next element */
    }
}